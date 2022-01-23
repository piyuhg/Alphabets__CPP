#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

class accountQuery{
	private:
		char accountNumber[20];
		char firstName[10];
		char lastName[10];
		float totalBalance;
	public:
		void readData();
		void showData();
		void writeRec();
		void readRec();
		void searchRec();
		void editRec();
		void deleteRec();
};

void accountQuery::readData(){
	cout<<"Enter the Account Number: ";
	cin>>accountNumber;
	cout<<"Enter the First Name: ";
	cin>>firstName;
	cout<<"Enter the Last Name: ";
	cin>>lastName;
	cout<<"Enter the Total Balance: ";
	cin>>totalBalance;
}

void accountQuery::showData(){
	cout<<"---------------------------------"<<endl;
	cout<<"Account Number: "<<accountNumber<<endl;
	cout<<"First Name: "<<firstName<<endl;
	cout<<"Last Name: "<<lastName<<endl;
	cout<<"Current Balance: Rs. "<<totalBalance<<endl;
	cout<<"---------------------------------"<<endl;
}

void accountQuery::writeRec(){
	ofstream outfile;
	outfile.open("record.bank",ios::binary|ios::app);
	readData();
	outfile.write(reinterpret_cast<char *>(this),sizeof(*this));
	outfile.close();
}

void accountQuery::readRec(){
	ifstream infile;
	infile.open("record.bank",ios::binary);
	if(!infile){
		cout<<"Error in Opening! File Not Found!!"<<endl;
		return;
	}
	cout<<"\n****Data from file***"<<endl;
	while(!infile.eof()){
		if(infile.read(reinterpret_cast<char *>(this),sizeof(*this)))
			showData();
	}
	infile.close();
}

void accountQuery::searchRec(){
	int n;
	ifstream infile;
	infile.open("record.bank",ios::binary);
	if(!infile){
		cout<<"Error in Opening! File Not Found!!"<<endl;
		return;
	}
	infile.seekg(0,ios::end);
	int count = infile.tellg()/sizeof(*this);
	cout<<"There are "<<count<<" record in the file"<<endl;
	cout<<"Enter the record number to search: ";
	cin>>n;
	infile.seekg((n-1)*sizeof(*this));
	infile.read(reinterpret_cast<char *>(this),sizeof(*this));
	showData();
	infile.close();
}

void accountQuery::editRec(){
	int n;
	fstream iofile;
	iofile.open("record.bank",ios::in|ios::binary);
	if(!iofile){
		cout<<"Error in Opening! File Not Found!!"<<endl;
		return;
	}
	iofile.seekg(0,ios::end);
	int count = iofile.tellg()/sizeof(*this);
	cout<<"There are "<<count<<" record in the file"<<endl;
	cout<<"Enter the record number to be edited: ";
	cin>>n;
	iofile.seekg((n-1)*sizeof(*this));
	iofile.read(reinterpret_cast<char *>(this),sizeof(*this));
	cout<<"Record "<<n<<" has followin data: "<<endl;
	showData();
	iofile.close();
	iofile.open("record.bank",ios::in|ios::out|ios::binary);
	iofile.seekp((n-1)*sizeof(*this));
	cout<<"Enter the data to modify: "<<endl;
	readData();
	iofile.write(reinterpret_cast<char *>(this),sizeof(*this));
	iofile.close();
}

void accountQuery::deleteRec(){
	int n;
	ifstream infile;
	infile.open("record.bank",ios::binary);
	if(!infile){
		cout<<"Error in Opening! File Not Found!!"<<endl;
		return;
	}
	infile.seekg(0,ios::end);
	int count = infile.tellg()/sizeof(*this);
	cout<<"There are "<<count<<" records in the file"<<endl;
	cout<<"Enter the record number to Deleted: ";
	cin>>n;
	fstream tempfile;
	tempfile.open("tempfile.bank",ios::out|ios::binary);
	infile.seekg(0);
	for(int i = 0;i<count;i++){
		infile.read(reinterpret_cast<char *>(this),sizeof(*this));
		if(i==(n-1))
			continue;
		tempfile.write(reinterpret_cast<char *>(this),sizeof(*this));
	}
	infile.close();
	tempfile.close();
	remove("record.bank");
	rename("tempfile.bank","record.bank");
}

int main(){
	int choice;
	accountQuery A;
	cout<<"-------Welcome to Account Information System-------"<<endl;
	while(true){
		cout<<"Select one option from below: "<<endl;
		cout<<"\t1-->Add record to file"<<endl;
		cout<<"\t2-->Show record from file"<<endl;
		cout<<"\t3-->Search record from file"<<endl;
		cout<<"\t4-->Update record"<<endl;
		cout<<"\t5-->Delete record"<<endl;
		cout<<"\t6-->Quit"<<endl;
		cout<<"Your Choice: ";
		cin>>choice;
		switch(choice){
			case 1:	A.writeRec();
				break;
			case 2: A.readRec();
				break;
			case 3: A.searchRec();
				break;
			case 4: A.editRec();
				break;
			case 5: A.deleteRec();
				break;
			case 6: exit(0);
				break;
			default: "Enter the valid choice!!";
		}
	}
	system("pause");
	return 0;
}

#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;

class  employee{
	private:
		string name;
		string designation;
		string department;

	public:
		static int size;
		employee(){ size++; }
		void read_data();
		void display_data();
		friend  void display_data_telecom( employee * d );
};

void employee::read_data(){
	cout << "Enter name : ";
	getline(cin,name);
	cout<<"Enter designation : ";
	getline(cin,designation);
	cout<< "Enter department : ";
	getline(cin,department);
	cout<<"-----------------Sucessfully added employee "<<name<<"-----------------"<<endl<<endl;
}

void employee::display_data(){
	cout<<
	endl<<"+------------------+-------------------------+"<<endl;
	cout<<"|     Employee     |        Infomation       |"<< endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"|       Name       |"<<setw(24)<<name  <<" |"<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"|    Designation   |"<<setw(24)<<designation <<" |"<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"|    Department    |"<<setw(24)<<department  <<" |"<<endl;
	cout<<"+------------------+-------------------------+"<<endl<<"\n\n\n";
}

int employee::size=0;

void display_data_telecom(employee * Employee){
	cout<< endl<< "---------Telecommunication Employees----------"<<endl;
	int size= Employee->size;
	// cout<<size<<endl;
	for (int i=0; i<size ;i++){
		if (Employee->department=="Telecommunication"){
			Employee->display_data();
		}
		Employee++;
	}
}

int main(){

	int numOfemployees=0;
	int command=0;
	cout<<"------------------------Welcome------------------------"<<endl<<endl;

	cout<<"Enter number of Employees to add : ";
	cin>>numOfemployees;
	cin.ignore();

	employee Employees  [numOfemployees];

	for (int i=0; i<numOfemployees; i++) 
		Employees[i].read_data();

	cout<< " Enter  \n 1 : To display all Employees , \n 2 : To display only Telecom dept Employees , \n 0 : to exit  "<< endl<<" ? : ";
	cin >> command;

	if (command==1) {
		cout<< endl<< "----------All department Employees-----------"<<endl;
		for (int i=0; i<numOfemployees; i++) 
			Employees[i].display_data();
	}
	else if(command==2) {
		display_data_telecom(Employees);
	}
	cout<<endl<<"---------------------Thank you-------------------"<<endl<<endl;

}
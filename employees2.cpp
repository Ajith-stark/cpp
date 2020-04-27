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
		friend  void display_data_telecom( employee * );
};

void employee::read_data(){
	cout << "Enter name : ";
	getline(cin,name);
	cout<<"Enter designation : ";
	getline(cin,designation);
	cout<< "Enter department : ";
	getline(cin,department);
	cout<<endl<<"## Successfully added employee "<<name<<" ##"<<endl<<endl;
}

void employee::display_data(){
	cout<<
	endl<<"+----------------------+---------------------+"<<endl;
	cout<< "  Employee name        : "<<name<<endl;
	cout<< "  Employee designation : "<<designation<<endl;
	cout<< "  Employee department  : "<<department<<endl;
	cout<<"+----------------------+--------------------+"<<endl;
}

int employee::size=0;

void display_data_telecom(employee * Employee){
	cout<< endl<< "---------Telecommunication Employees----------"<<endl;
	int size= Employee->size;
	for (int i=0; i<size ;i++){
		if (Employee->department=="Telecommunication"){
			Employee->display_data();
		}
		Employee++;
	}
}

int main(){

	int numOfEmployees=0;
	int command=0;
	cout<<"------------------------Welcome------------------------"<<endl<<endl;

	cout<<"Enter number of Employees to add : ";
	cin>>numOfEmployees;
	cout<<endl;
	cin.ignore();

	employee Employees  [numOfEmployees];

	for (int i=0; i<numOfEmployees; i++) 
		Employees[i].read_data();


		cout<< endl<< "----------All department Employees-----------"<<endl;
		for (int i=0; i<numOfEmployees; i++) 
			Employees[i].display_data();

		display_data_telecom(Employees);

	cout<<endl<<"---------------------Thank you-------------------"<<endl<<endl;

}
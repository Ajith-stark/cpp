#include<iostream>
#include<string.h>
#include<iomanip>
#define tab "\t"
using namespace std;

class subject{
	public:
		char subjectName[100];

	private:
		unsigned short int internals[3];
		unsigned short int assignments[3];
		unsigned short int exam;
		char SEE;
		unsigned short  calcInternals(unsigned short ,unsigned short ,unsigned short );
		void assignSEE(float);

	public:
		subject(char name[100] );
		void setInternals();
		void setAssignmentMarks();
		void setExamMarks();
		float clacMarks();  	
		char getSEE();
};


class student{
  	private:
		string name;
		string USN;
		subject Subjects[3] ={"Physics", "Electronics" ,"Microcontroller"};
		float marks[3];
		char  SEEs[3];

	public:
    	void getData();
    	void printData();
};


subject::subject(char name[100]){
	strcpy(subjectName, name);
}

void subject::setInternals(){
	unsigned short int int1=0,int2=0,int3=0;
	cout <<"Enter "<<subjectName<<" internals Marks   : ";
	cin >> int1 >> int2 >> int3;
 	internals[0]=int1;
	internals[1]=int2;
	internals[2]=int3;
}

void subject::setAssignmentMarks(){
	unsigned short int assign1=0,assign2=0,assign3=0;
	cout<<"Enter "<< subjectName <<" assignments marks : ";
	cin >> assign1 >> assign2 >> assign3;
 	assignments[0]=assign1;
	assignments[1]=assign2;
	assignments[2]=assign3;
}

void subject::setExamMarks(){
	cout << "Enter exam marks : ";
	cin >> exam;
}

unsigned short subject::calcInternals(unsigned short int1,unsigned short int2,unsigned short int3){
	if (int1 < int2 && int1 < int3) return (int2+int3)*0.8;
	else if (int2 < int1 && int2 < int3) return (int1+int3)*0.8;
	else return (int1+int2)*0.8;
}

void subject::assignSEE(float totalMarks){
	if (totalMarks >=95 ) SEE='S';
	else if (totalMarks <95 && totalMarks >=85) SEE='A';
	else if (totalMarks <85 && totalMarks >=75) SEE='B';
	else if (totalMarks <75 && totalMarks >=65) SEE='C';
	else if (totalMarks <65 && totalMarks >=55) SEE='D';
	else if (totalMarks <55 && totalMarks >=45) SEE='F';
	else SEE='F';
}

float subject::clacMarks(){
	unsigned int internalsMarks=0,assignmentMarks=0;
	for (auto assign : assignments)
		assignmentMarks+=assign;

	assignmentMarks/=3;
	internalsMarks = calcInternals(internals[0],internals[1],internals[2]);
	float totalMarks= internalsMarks + assignmentMarks + (exam/2.0);
	assignSEE(totalMarks);
	return totalMarks;
}

char subject:: getSEE(){
	return SEE;
}

void student:: getData(){
	cout << "Enter name : ";
	getline(cin, name);

	cout << "Enter USN  : ";
	getline(cin, USN);

	cout << endl;
	for (int i=0; i<3 ; i++){
		Subjects[i].setInternals();
		Subjects[i].setAssignmentMarks();
		Subjects[i].setExamMarks();
		marks[i]=Subjects[i].clacMarks();
		SEEs[i]= Subjects[i].getSEE();
		cout<<endl;
	}
}

void student:: printData(){
	cout<<endl;
	cout << tab << "Student name : "<< name << endl;
	cout << tab << "Student USN  : " << USN << endl <<endl;
	for (int i=0; i<3 ; i++)
		cout << setw(20)<< Subjects[i].subjectName << "'s  marks is : "<< marks[i] << tab <<" SEE : "<<SEEs[i]<<endl;
}

int main(){	
	student  ajith;
	ajith.getData();
	ajith.printData();
}

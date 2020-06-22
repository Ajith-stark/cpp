#include<iostream>
#include<string.h>
#include<iomanip>

#define tab "\t"
using namespace std;

struct subject
{

	char subjectName[100];
	unsigned short int internals[3];
	unsigned short int assignments[3];
	unsigned short int internalsMarks=0;
	unsigned short int assignmentMarks=0;
	unsigned short int examMarks=0;
	char SEE;
	short float  
	clacMarks(){
		for(auto internal : internals)
			internalsMarks+=internal;
		for(auto assignment : assignments)
			assignmentMarks+=assignment;
		return (internalsMarks*0.8)+ assignmentMarks + (examMarks/2.0) 
	}

	void setInternals(){
		unsigned short int int1=0,int2=0,int3=0;
		cout <<"Enter "<<subjectName<<" internals Marks   : ";
		cin >> int1 >> int2 >> int3;
		internals[0]=int1;
		internals[1]=int2;
		internals[2]=int3;
	}

	void setAssignmentMarks(){
		unsigned short int assign1=0,assign2=0,assign3=0;
		cout<<"Enter "<< subjectName <<" assignments marks : ";
		cin >> assign1 >> assign2 >> assign3;
	 	assignments[0]=assign1;
		assignments[1]=assign2;
		assignments[2]=assign3;
	}

	void setExamMarks(){
		cout << "Enter exam marks : ";
		cin >> examMarks;
	}


	void calcSEE(unsigned short int totalMarks){
		if (totalMarks >=95 ) SEE='S';
		else if (totalMarks <95 && totalMarks >=85) SEE='A';
		else if (totalMarks <85 && totalMarks >=75) SEE='B';
		else if (totalMarks <75 && totalMarks >=65) SEE='C';
		else if (totalMarks <65 && totalMarks >=55) SEE='D';
		else if (totalMarks <55 && totalMarks >=45) SEE='F';
		else SEE='F';
	}
	
};


class student{
  	private:
		string name;
		string USN;
		struct subject Subjects[3] ={"Physics", "Electronics" ,"Microcontroller"};
		float marks[3];
		char  SEEs[3];

	public:
    	void getData();
    	void printData();
};


void student:: getData(){
	cout << "Enter name : ";
	getline(cin, name);

	cout << "Enter USN  : ";
	getline(cin, USN);

	cout << endl;
	for (int i=0; i<3 ; i++){
		Subjects[i].
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

}			
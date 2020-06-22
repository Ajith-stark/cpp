#include<iostream>
#include<string.h>
#include<iomanip>
#include<math.h>
#define format(x) setw(x) << setfill(' ')<< setiosflags(ios::left)
#define formatNum setw(9) << setfill(' ')<< setiosflags(ios::left)
using namespace std;

class subject{
	public:
		char subjectName[100];
		char SEE;
		unsigned short int internals[3];
		unsigned short int examMarks=0;
		subject(char name[100] );
		void setInternalMarks();
		void setAssignmentMarks();
		void setExamMarks();
		float calcMarks();  
	private:
		unsigned short int assignments[3];
		unsigned short calcInternals(unsigned short ,unsigned short ,unsigned short );
		char calcSEE(float);
};


subject::subject(char name[100]){
	strcpy(subjectName, name);
}

void subject::setInternalMarks(){
	unsigned short int int1=0,int2=0,int3=0;
	cout <<"Enter "<<subjectName<<" internals marks   : ";
	cin >> int1 >> int2 >> int3;
 	internals[0]=int1;
	internals[1]=int2;
	internals[2]=int3;
}

void subject::setAssignmentMarks(){
	// unsigned short int assign1=0,assign2=0,assign3=0;
	cout<<"Enter "<< subjectName <<" assignments marks : ";
	for ( auto & assignment : assignments){
		cin >> assignment ;
	}
	// cin >> assign1 >> assign2 >> assign3;
 // 	assignments[0]=assign1;
	// assignments[1]=assign2;
	// assignments[2]=assign3;
}

void subject::setExamMarks(){
	cout << "Enter "<< subjectName" exam marks : ";
	cin >> examMarks;
}

unsigned short subject::calcInternals(unsigned short int1,unsigned short int2,unsigned short int3){
	if (int1 < int2 && int1 < int3) return (int2+int3)*0.8;
	else if (int2 < int1 && int2 < int3) return (int1+int3)*0.8;
	else return (int1+int2)*0.8;
}

char subject::calcSEE(float totalMarks){
	if (totalMarks >=90 && totalMarks <=100 ) return 'S';
	else if (totalMarks >=80 && totalMarks <=89 ) return 'A';
	else if (totalMarks >=70 && totalMarks <=79 ) return 'B';
	else if (totalMarks >=60 && totalMarks <=69 ) return 'C';
	else if (totalMarks >=50 && totalMarks <=59 ) return 'D';
	else if (totalMarks >=40 && totalMarks <=49 ) return 'E';
	else if (totalMarks < 40) return 'F';
	else return '-';
}

float subject::calcMarks(){
	unsigned int internalsMarks=0,assignmentMarks=0;
	for (auto assign : assignments)
		assignmentMarks+=assign;
	assignmentMarks/=3;
	internalsMarks = calcInternals(internals[0],internals[1],internals[2]);
	int finalCIE= internalsMarks + assignmentMarks;
	int totalMarks= round( finalCIE + (examMarks/2.0));
	SEE=calcSEE(totalMarks);
	return finalCIE;
}


class student{
  	private:
		string name;
		string USN;
		subject Subjects[3] ={"Maths", "Electronics" ,"Microcontroller"};
		float finalCIEmarks[3];
		char  SEEs[3];

	public:
    	void getData();
    	void printData();
};


void student:: getData(){
	cin.ignore();
	cout << "Enter name : ";
	getline(cin, name);

	cout << "Enter USN  : ";
	getline(cin, USN);

	cout << endl;
	for (int i=0; i<3 ; i++){
		Subjects[i].setInternalMarks();
		Subjects[i].setAssignmentMarks();
		Subjects[i].setExamMarks();
		finalCIEmarks[i]=Subjects[i].calcMarks();
		SEEs[i]= Subjects[i].SEE;
		cout<<endl;
	}
}

void student:: printData(){
	cout<<endl;
	// cout<<"-------------------------------------"<<endl;
	// cout << "| " << format << "Name" << " | " << format << name << " |" <<endl;
	// cout << "| " << format << "USN"  << " | " << format << USN  << " |" <<endl;
	// cout<<"-------------------------------------"<<endl;
	cout << " " << format(15) << "Name" << " : " << format(15) << name  <<endl;
	cout << " " << format(15) << "USN"  << " : " << format(15) << USN   <<endl;
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<< "| "  << format(15) << "Subjects"  
		<< " | " << format(9) << "CIE-1" 
		<< " | " << format(9) << "CIE-2"  
		<< " | " << format(9) << "CIE-3"  
		<< " | " << format(9) << "Final CIE" 
		<< " | " << format(9) << "Grades"  
		<< " | " << endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;

	for (int i=0; i<3 ; i++)
		cout << "| " << format(15) <<  Subjects[i].subjectName 
		<< " | " << format(9) << Subjects[i].internals[0] 
		<< " | " << format(9) << Subjects[i].internals[1] 
		<< " | " << format(9) << Subjects[i].internals[2] 
		<< " | " << format(9) << finalCIEmarks[i]  
		<< " | " << format(9) << SEEs[i] 
		<<" |"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl<<endl;

}

int main(){	
	unsigned int count = 0;
	cout <<"Enter number of students : ";
	cin >> count;
	student Students[count];
	for (auto Student : Students )
	{	
		cout << endl;
		Student.getData();
		Student.printData();
	}

}

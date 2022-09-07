#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string name;
	int roll_no,marks_in_fsc,marks_in_matric;
	cout<<"\t\tEnter your Name: "; cin>>name;
	cout<<"\n\t\tEnter your Roll no: "; cin>>roll_no;
	cout<<"\n\t\tEnter your Marks in FSC: "; cin>>marks_in_fsc;
	cout<<"\n\t\tEnter your Marks in Matric: "; cin>>marks_in_matric;
	cout<<endl<<endl<<endl;
	cout<<"*******************************************************************\n";
	cout<<"\t\t\tSTUDENT REPORT\n\n";
	cout<<"\tNAME: "<<name<<endl;
	cout<<"\tRoll no: "<<roll_no<<endl;
	cout<<"\tMarks in FSC: "<<marks_in_fsc<<endl;
	cout<<"\tMarks in Matric: "<<marks_in_matric<<endl;
	cout<<"\n********************************************************************";
	return 0;
}

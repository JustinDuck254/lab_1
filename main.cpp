#include <iostream>
#include <string>
using namespace std;
int main() {
	float math, science,english, average=0.0;
	std::string name;
	short age, student_id;
	char grade;
	while (true){
		cout<<"Enter your student ID: ";
		cin>> student_id;
		cout<<endl<<"Enter your full name: ";
		getline(cin,name);
		cout<<endl<<"Enter your age: ";
		cin>>age;
		cout<<endl<<"Enter Math score: ";
		cin>>math;
		cout<<endl<<"Enter Science score: ";
		cin>>science;
		cout<<endl<<"Enter English score: ";
		cin>>english;
	}
	

}

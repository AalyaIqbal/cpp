//student class using parameterized constructors
#include<iostream>
using namespace std;
class Student{
    public:
    int roll, marks;
    // Parameterized Constructor
    Student(int i, int j){
        roll=i;
        marks=j;
    }
    void display(){
    	cout<<"Roll.no="<<roll<<" , "<<"Marks="<<marks<<endl;
    }
};
int main(){
    // Constructor called
    Student s1=Student(66, 80);
    Student s2=Student(16, 80);
	s1.display();
	s2.display();
    return 0;
}

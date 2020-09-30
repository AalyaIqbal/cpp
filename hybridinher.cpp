// C++ program for Hybrid Inheritance
#include<iostream>
using namespace std;
// base class1
class Principal{
    public:
        Principal(){
            cout<<"I am the Principal\n";
        }
};

//base class2
class Teacher{
    public:
        Teacher(){
            cout<<"I am a teacher\n";
        }
};

//sub class of base class1&2
class Student1: public Principal, public Teacher{
	
};

//sub class of base class2
class Student2: public Teacher{

};


int main(){
    // creating object of sub class will invoke the constructor of base class
    Principal obj;
    Student1 obj1;
    Student2 obj2;

    return 0;
}

#include<iostream>
using namespace std;
class student{
    public:
        string name;
		int rollno;
        float sub1;
        float sub2;

        float average(){
            return (sub1+sub2)/2;
        }
};
int main(){
	student s1;
	s1.name="Aalya";
	s1.rollno=66;
	s1.sub1=80;
	s1.sub2=90;
	s1.average();
	cout<<"Name is "<<s1.name<<endl;
	cout<<"Roll is "<<s1.rollno<<endl;
    cout<<"Average is "<<s1.average()<<endl;
	
	return 0;

}


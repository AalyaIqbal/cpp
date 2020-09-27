#include<iostream>
using namespace std;
class Employee{
	public:
		Employee(){
			cout<<"Constructor invoked"<<endl;
		}
		~Employee(){
			cout<<"Destructor invoked"<<endl;
		}
	};
	int main(void){
		Employee e1; //creating an object of Employee
		Employee e2; //creating an object of Employee
		return 0;
	}
		
		

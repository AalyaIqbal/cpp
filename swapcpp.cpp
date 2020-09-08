//swapping two numbers without using third variable
#include <iostream>
using namespace std;
int main(){
	int num1=10, num2=20;
	cout<<"Values before swapping: "<<"num1="<<num1<<" and num2="<<num2<<endl;
	num2=num2+num1;
	num1=num2-num1;
	num2=num2-num1;
    cout<<"After swapping: "<<"num1="<<num1<<" and num2="<<num2<<endl;
    return 0;
}

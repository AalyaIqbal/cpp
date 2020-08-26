//c++ program to find the greatest of 2 numbers
#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	cout<<"Enter the two numbers you want to compare\n";
	cin>>num1>>num2;
	if(num1>num2){
		cout<<num1<<" is greater\n";
	}
	else{
		cout<<num2<<" is greater\n";
	}
	return 0;
}

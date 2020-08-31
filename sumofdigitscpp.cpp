//program to find the sum of digits of a number
#include<iostream>
using namespace std;
int main(){
	int num, count, sum, remainder;
	cout<<"Enter the number\n";
	cin>>num;
	//variable assignment
	count=num;
	sum=0;
	//while loop for calculating the sum of digits of a number
	while(num!=0){
		remainder=num%10;
		sum=sum+remainder;
		num=num/10;
	}
	cout<<"Sum="<<sum;
	return 0;
}

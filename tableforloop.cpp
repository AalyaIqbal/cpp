//program to print the table of a number using for loop
#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=10;++i)
	cout<<"\n"<<n<<"x"<<i<<" = "<<n*i;
	return 0;
}

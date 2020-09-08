//swapping  2 nos (call by reference)
#include<iostream>
using namespace std;
void swap(int&, int&);
int main(){
	int a=10, b=20;
	cout<<"Value before swapping: a="<<a<<" b="<<b<<endl;
	swap(a, b);
	cout<<"Value after swapping: a="<<a<<" b="<<b<<endl;
	return 0;
}
void swap(int &x, int &y){
	int p;
	p=x;
	x=y;
	y=p;
}

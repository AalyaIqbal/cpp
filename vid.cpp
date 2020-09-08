#include<iostream>
using namespace std;
void function_under_param_test(int &b, int c);
int main(){
	int a=20;
	cout<<"a="<<a<<" &a="<<&a<<endl;
	function_under_param_test(a, a);
	return 0;
}
void function_under_param_test(int &b, int c){
	cout<<"b="<<b<<" &b="<<&b<<endl;
	cout<<"c="<<b<<" &c="<<&c<<endl;
}

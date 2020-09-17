#include<iostream>
using namespace std;
int main(){
int number=50;
int *p;//pointer to int
p=&number;//stores the address of number variable
cout<<"Address of p variable is \n"<<p<<"\n";
p=p-1;
cout<<"After decrement: Address of p variable is \n"<<p; // in our case, p will get decremented by 4 bytes.
return 0;
}

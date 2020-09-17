#include<iostream>
using namespace std;
int main()
{
int number=50;
int *p;//pointer to int
p=&number;//stores the address of number variable
cout<<"Address of p variable is \n"<<p;
p=p+4;   //adding 4 to pointer variable
cout<<"\n After adding 3: Address of p variable is  \n"<<p;
return 0;
}

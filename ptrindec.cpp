// C program to illustrate pointer increment/decrement
#include<iostream>
using namespace std;
int main(){
    
    int a=4;
    int *ptr1;
    ptr1 = &a;

    cout<<"Pointer ptr1 before Increment: "<<ptr1<<endl;

    // Incrementing pointer ptr1;
    ptr1++;

    cout<<"Pointer ptr1 after Increment: "<<ptr1<<endl;


    cout<<"Pointer ptr1 before Decrement: "<<ptr1<<endl;

    // Decrementing pointer ptr1;
    ptr1--;

    cout<<"Pointer ptr1 after Decrement: "<<ptr1<<endl;


    return 0;
}

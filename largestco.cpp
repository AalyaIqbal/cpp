//program to find the greatest of three numbers(using conditional operator)
#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3, largest;
    cout<<"Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    largest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3) ;
    cout << largest << " is the largest number.";
    return 0;
}

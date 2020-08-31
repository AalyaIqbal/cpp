#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter value of num:";
	cin>>num;
    switch(num){
        case 1:
            printf("You have entered value 1\n");
			break;
        case 2:
            cout<<"You have entered value 2\n";
			break;
        default:
            cout<<"Invalid input";
    }
    return 0;
}

//inline function
#include<iostream>
using namespace std;
inline float average(float sub1, float sub2, float sub3){
    return(sub1+sub2+sub3)/3;
}
int main(){
	float sub1, sub2, sub3;
	cout<<"Enter the details\n";
	cin>>sub1>>sub2>>sub3;
    cout<<"The calculated average is:"<<average(sub1, sub2, sub3);
    return 0;
} 

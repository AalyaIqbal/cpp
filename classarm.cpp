#include<iostream>
using namespace std;
class class_arm{
	private:
		int n,r,sum=0,temp;
	public:
		void armstrong();
};
void class_arm::armstrong(){
    cout<<"Enter the Number\n";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        cout<<"Armstrong Number";
    else
        cout<<"Not an Armstrong Number";
}
int main(){
	class_arm num;
	num.armstrong();
	return 0;
}


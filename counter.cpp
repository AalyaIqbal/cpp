#include<iostream>
using namespace std;
int count=0;
class counter{
	public:
		counter(){
			count++;
			cout<<"\nNo of objects created"<<count;
		}
		~counter(){
			cout<<"\nNo of objects destroyed"<<count;
			count--;
		}
	};
	int main(){
		cout<<"\n\nEnter Main\n";
		counter c1, c2, c3, c4;
		{
			cout<<"\n\nEnter block1\n";
			counter c5;
		}
		{
			cout<<"\n\nEnter Block2\n";
			counter c6;
		}
		cout<<"\n\nEnter main\n";
		return 0;
	}
			

//product of two matrices
#include<iostream>
using namespace std;
int main(){
	int c, d, row1, col1, row2, col2, k, sum=0;
	int first[10][10], second[10][10], multiply[10][10];
	cout<<"Enter the number of rows and columns of first matrix\n";
	cin>>row1>>col1;
	cout<<"Enter the number of rows and columns of second matrix\n";
	cin>>row2>>col2;
	if(col1!=row2)
	    cout<<"The two matrices cannot be multiplied\n";
	else{
	    cout<<"Enter the elements of first matrix\n";
	    for(c=0; c<row1; c++)
        for(d=0; d<col1; d++)
    	cin>>first[c][d];
		cout<<"Enter the elements of second matrix\n";
		for(c=0; c<row2; c++)
		for(d=0; d<col2; d++)
		cin>>second[c][d];
	        for(c=0; c<row1; c++){
		        for(d=0; d<col2; d++){
		        	for(k=0; k<row1; k++){
				        sum=sum+first[c][k]*second[k][d];
				    }
				    multiply[c][d]=sum;
				    sum=0;
			    }
		    }
	        cout<<"Product of the two matrices:\n";
	        for(c=0; c<row1; c++){
	            for(d=0; d<col1; d++)
	            cout<<multiply[c][d];
	            cout<<"\n";
            }
        }
        return 0;
}


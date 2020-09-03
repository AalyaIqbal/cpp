//sum of two matrices
#include<iostream>
using namespace std;
int main(){
   int row, col, m1[10][10], m2[10][10], sum[10][10];
   cout<<"Enter the number of rows\n";
   cin>>row;
   cout<<"Enter the number of columns\n";
   cin>>col;
   cout << "Enter the elements of first 1st matrix\n";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of first 1st matrix\n";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }

   cout<<"Sum: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
   }

   return 0;
}

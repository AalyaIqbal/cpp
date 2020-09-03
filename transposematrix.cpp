//transpose of a matrix
#include<iostream>
using namespace std;
int main ()
{
    int matrix[10][10], m, n, i, j;
    cout<<"Enter rows and columns of matrix\n";
    cin>>m>>n;
    cout<<"Enter elements of matrix\n";
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            cin >> matrix[i][j];
    cout << "Entered Matrix\n ";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"Transpose of Matrix:\n";
    for(i=0; i<n; i++){
        for (j=0; j<m; j++)
            cout<<matrix[j][i]<<" ";
        cout<<"\n";
    }
    return 0;
}

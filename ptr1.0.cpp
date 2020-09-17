#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int i;
    cout<<"printing array elements...\n";
    for(i = 0; i< 5; i++)
    {
        cout<<*(p+i);
    }
}

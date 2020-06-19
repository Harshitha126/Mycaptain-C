#include<iostream>
using namespace std;
int main()
{
    int a[30],*p,m,i;
    p=&a[0];
    cout<<"Enter the number of elements of array:\n";
    cin>>m;
    cout<<"Enter the elements of the array:\t";
    for(i=0;i<m;i++)
    {
     cin>> a[i];

    }    cout<<"Entered elements are:\t";
    for(i=0;i<m;i++)
    {
        cout<<*p<<"\n";
        p++;
    }
}

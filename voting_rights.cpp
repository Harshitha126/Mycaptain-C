#include<iostream>
using namespace std;
int main()
{
    int i,count=0,m;
    cout<<"Enter your age:\t";
    cin>>i;
    if(i>=18)
    {
        cout<<"You are Eligible to vote\n";
    bool c;
    cout<<"Do you have a voter ID :\t"<<"Enter 1 if yes and enter 0 if no\n" ;
    cin>>c;
    if(c==true)
        cout<<"\nThank you for the response! Do vote in the coming elections.\n";
    else
        cout<<"\nGet your voter ID done and do vote in the coming elections!\n";
    }
    else
    {
        for(m=i;m<18;m++)
            count++;
        cout<<"You still have\t"<<count<<"years to vote\n";
    }
}

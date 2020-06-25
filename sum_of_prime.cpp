#include<iostream>
using namespace std;
int main()
{
    int i,num;
    int check_prime(int num);
    cout<<"Enter a number";
    cin>>num;
    for(i=0;i<=num/2;i++)
    {
        if(check_prime(i)==1)
        {
            if(check_prime(num-i)==1)
            {
                cout<<"\n"<<num<<"="<<num-i<<"+"<<i;
            }
        }
    }
}

int check_prime(int n)
{
    int i,isprime=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            isprime=0;
    }
    return isprime;
}

#include<iostream>
using namespace std;

class time{
public:
    int hours;
    int minutes;
    int seconds;

    int calc_seconds();
};

time::calc_seconds()
{
        int sec;
        sec=seconds+(minutes*60)+(hours*60*60);
        return sec;
    }
int main()
{
    time t;
    cout<<"Number of hours?";
    cin>>t.hours;
    cout<<"Number of minutes?";
    cin>>t.minutes;
    cout<<"Number of seconds?";
    cin>>t.seconds;
    cout<<"Time in total seconds:"<<t.calc_seconds();
}

#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    time_t now=time(0);
    cout<<"Seconds elapsed till 1900 :"<<now<<endl;
    tm *ltm=localtime(&now);
    cout<<"Year: " << 1900+ltm->tm_year<<endl;
    cout<<"Month: "<<ltm->tm_mon +1<<endl;
    cout<<"day: "<< ltm->tm_mday<<endl;
    cout<<"Hour:"<<ltm->tm_hour<<endl;
    cout<<"Min :"<<ltm->tm_min<<endl;
    cout<<"Sec :"<<ltm->tm_sec<<endl;
    return 0;
}

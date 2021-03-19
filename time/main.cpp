#include <iostream>
#include<ctime>

using namespace std;

int main()
{
 time_t now =time(0);
 char* dt =ctime(&now);
 cout<<"the current local time is :"<<dt<<endl;
 tm *time_now=gmtime(&now);
 dt=asctime(time_now);
 cout<<"The current UTC time is :"<<dt<<endl;

}

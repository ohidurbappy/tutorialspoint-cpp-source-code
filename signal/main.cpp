#include <iostream>
#include<csignal>
#include<windows.h>
#include<conio.h>

void signalhandler(int signum){
std::cout<<"Signal Received"<<signum<<std::endl;
getch();
system("exit");

}
using namespace std;

int main()
{
    signal(SIGINT,signalhandler);

    while(1){
        std::cout<<"Going to sleep...."<<endl;
        raise(SIGINT);

    }
    cout << "Hello world!" << endl;
    return 0;
}

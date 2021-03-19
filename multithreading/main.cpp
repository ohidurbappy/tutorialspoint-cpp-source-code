#include <iostream>
#include<pthread.h>


using namespace std;
void *printHello(){
cout<<"hello"<<endl;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

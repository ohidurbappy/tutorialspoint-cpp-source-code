#include <iostream>

#define MKSTR(X)#X

#define PI 3.1416

#ifndef X
    #define X "Bappy"
#endif // X

#if 0
    preproceesor commenting style
#endif // 0

#define MIN(a,b) ((a<b)?a:b)
//macro to get minimum of two number

#define CONCAT(x,y) x##y
using namespace std;

int main()
{
    int xy=100;
    cout<<CONCAT(x,y)<<endl;

    cout<<MKSTR(Hello C++)<<endl;
    cout<<MIN(98,65)<<endl;
    cout <<X<< endl;


    cout<<__FILE__<<endl;
    cout<<__LINE__<<endl;
    cout<<__TIME__<<endl;
    cout<<__DATE__<<endl;
    return 0;
}

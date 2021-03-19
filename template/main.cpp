#include <iostream>

using namespace std;

template <typename T>
inline T const& Max(T const& a,T const& b){

return a>b?a:b;

}

int main()
{
    int a=8;
    int b=10;
    cout<<Max(a,b)<<endl;
    double x=0.7;
    double y=.9;
    cout<<Max(x,y)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;
inline int  max_num(int x,int y){
return (x>y)?x:y;
}
int main()
{
    cout << max_num(12,9)<<endl;
    cout << max_num(67,98)<<endl;
    cout << max_num(12,16)<<endl;

    return 0;
}

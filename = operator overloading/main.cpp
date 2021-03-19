#include <iostream>

using namespace std;
class Box{
public:
    int length;

    Box operator=(const Box& b){
    this->length=b.length;

    }


};
int main()
{
    Box b1;
    Box b2;
    b1.length=5555;
    b2=b1;

    cout << b2.length<< endl;
    return 0;
}

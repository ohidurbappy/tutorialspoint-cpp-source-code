#include <iostream>

using namespace std;
class Box{
public:
    int length;

    Box operator+(const Box& b){
    Box box;
    box.length=this->length+b.length;
    return box;


    }



};
int main()
{
    Box box1;
    Box box2;
    Box box3;
    box1.length=3;
    box2.length=4;
    box3=box1+box2;
    cout<<box3.length<<endl;
    return 0;
}

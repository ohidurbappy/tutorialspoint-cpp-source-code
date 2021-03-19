#include <iostream>

using namespace std;
class Box{
public:
    Box(){
    cout<<"Box Created"<<endl;
    }

    ~Box(){
    cout<<"Box Destroyed"<<endl;
    }
};
int main()
{
    Box* myBoxArray=new Box[10];
    delete [] myBoxArray;
    return 0;
}

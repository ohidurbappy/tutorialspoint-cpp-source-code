#include <iostream>

using namespace std;
class Shape{ //abstract class
protected:
    int length;
    int breadth;
public:
    virtual int getArea()=0;    //pure virtual function providing interface framework
    void setLength(int len){
    length=len;
    }
    void setBreadth(int bre){
    breadth=bre;
    }

};

class Rect : public Shape{ //concrete class
public:
    int getArea(void){
    return length *breadth;

    }


};
int main()
{
    Rect shape1;
    shape1.setBreadth(8);
    shape1.setLength(90);
    cout<<shape1.getArea()<<endl;


    return 0;
}

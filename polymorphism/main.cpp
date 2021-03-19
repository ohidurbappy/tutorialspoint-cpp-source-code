#include <iostream>

using namespace std;
class shape{
protected :
    int length;
    int breadth;
public :
    friend class line;
    shape(int len=0,int bre=0){
    length=len;
    breadth=bre;
    }
virtual int area(void){
cout<<"Parent class area"<<endl;
return 0;

}
int myArea(){}//pure virtual function
};


class rectangle:public shape{
public:
    rectangle(int a=0,int b=0):shape(a,b){}

    int area(){
    cout<<"Rectangle class area"<<endl;
    return length*breadth;

    }


};

class line{
public:
    int lineHeight(void){
    return length;
    }

};

class triangle:public shape{
public:
    triangle(int a=0,int b=0):shape(a,b){}

    int area()
    {
        cout<<"Triangle class area"<<endl;
        return (length*breadth)/2;

    }
};
int main()
{

line Line1;
    shape *Shape;
    rectangle rect(5,9);
    triangle tri(7,9);

    Shape=&rect;
    Shape->area();

    Shape=&tri;

    Shape->area();

    return 0;
}

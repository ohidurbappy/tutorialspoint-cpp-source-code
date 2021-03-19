#include <iostream>

using namespace std;

class Box{

   public: static int objectCount;
public:
    double length;

    Box(double len=1.0){ //constructor
    length=len;
    objectCount++;
    }

    double area(void){
    return length*length;

    }
     int compare(Box box){
     return this->length > box.length;

     }

     ~Box(void){
     cout<<"object destroyed"<<"at "<<this<<endl;
     }


};
class smallBox:public Box{
public:
    int thickness;
protected :
    int thickness_level;


};

class verySmallBox:public Box,public smallBox{
public :
    static int mycount;
    int boxsize;
private:
    int boxlevel;
protected:
    int boxDurabilitty;



};
int verySmallBox::mycount=89;
int Box::objectCount=0;
int main()
{
     Box box1(.02);
     Box box2;
     Box *ptrBox;
     ptrBox=&box2;
     if(box1.compare(box2)){

        cout<<"Box 1 is bigger"<<endl;

     }else{

     cout<<"Box 2 is bigger "<<endl;

     }
cout<<"Length of Box 1 is:"<<ptrBox->length<<endl;
cout<<"No of object created is :" <<Box::objectCount<<endl;
    return 0;
}

#include <iostream>

using namespace std;

class Box{

    public:
        int id;
double length;
double breadth;
double height;
void setID(int myid);
int getID(void);
Box(){ //a constructor
cout<<"an object got created"<<endl;
}
~Box(void){
cout<<"Object is deleted"<<endl;
}
double volume(void){
return length*breadth*height;
}
};

//derived classes
class smallBox:Box{
public :
    double thickness;
    void smallBoxThickness(double i){
    thickness=i;
    }


};

int Box::getID(void){
return id;
}
;

void Box::setID(int myid){
id=myid;
}
int main()
{
   Box  box1;
   smallBox smallBox1;
   smallBox1.smallBoxThickness(2.0);
   double vol;
   // box1 specs----->
    box1.length=12.0;
    box1.breadth=4.0;
    box1.height=87.0;
    box1.setID(4);

    cout<<"BOX ID: "<<box1.getID()<<endl;

    vol=box1.volume();
    cout<<"The volume of the box is :"<<vol<<endl;

    cout<<"thickness of the small box1 : "<<smallBox1.thickness<<endl;

    return 0;
}

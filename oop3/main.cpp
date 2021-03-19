#include <iostream>

using namespace std;

class shape{

protected:
    double length;
    double breadth;
    double height;

public:
    static int s;
    shape(){ // the constructor of the class
    s++;
    }
    friend double square(shape shape1);
    void setLength(double x){
    length=x;
    }
    void setBreadth(double y){
    breadth=y;
    }
    void setHeight(double z){
    height=z;
    }
    ~shape(void){}; // the destructor



};
double square(shape shape1){

return shape1.length*shape1.length;

}

class triangle:public shape{
double base;
public:
    void setbase(double x){
    base=x;
}
    double t_area(){
    return .5*base*height;

    }

};
int main()
{
    triangle t1;
    shape square1;
    square1.setLength(5.0);
t1.setbase(12.0);t1.setHeight(12.0);
cout<<"Area of the triangle:"<<t1.t_area()<<endl;
cout<<"Area of the square: "<<square(square1)<<endl;
cout <<"No of shapes defined: "<<"xxxx"<<endl;
    return 0;
}

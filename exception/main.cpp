#include <iostream>
#include<exception>

struct  MyException : public exception
{

const  char * what() const throw
{
    throw "C++ exception";
}


};
using namespace std;
double division(int a,int b){
if(b==0){

    throw "Division by zero";
}
    return a/b;

}
int main()

{
    try{
        throw MyException();
    }catch (MyException& e){
    std::cout<<e.what()<<std::endl;

    }
int x=87;
int b=8;
double z=0;
try{
z=division(x,b);
cout<<z<<endl;
}catch (const char* msg){

cerr<<msg<<endl;
}

    return 0;
}

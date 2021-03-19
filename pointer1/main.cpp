#include <iostream>
#include <string>

//using namespace std;

int main()
{
    std::string *ptr;
    std::string x="hello";
    ptr=&x;
    for(int x=15;x<=16;x++){
        std::cout<<*ptr--<<std::endl;
    }
    return 0;
}

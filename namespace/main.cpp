#include <iostream>
namespace bappy{

void cout(void){
std::cout<<"Hello I am bappy"<<std::endl;
}

}

namespace x{
// nested namespace

namespace y{

void show(){
std::cout<<"Hello I am showing up"<<std::endl;
}
}
}

int main()
{
    using namespace x::y;
    bappy::cout();
    show();
    return 0;
}

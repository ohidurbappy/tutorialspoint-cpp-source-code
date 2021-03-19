#include <iostream>

using namespace std;
class printdata{
public:
    void printdt(int x){
    cout<<"The integer is: "<<x<<endl;


    }
    void printdt(double x){
    cout<<"The provided double value is : "<<x<<endl;
    }

    void printdt(char* c){
    cout<<"The provided string is:"<<c<<endl;

    }

};
int main()
{
    printdata pd;
    pd.printdt(2);
    pd.printdt(56.0);
    pd.printdt("Happy coding");
    return 0;
}

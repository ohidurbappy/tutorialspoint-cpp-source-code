#include <iostream>

using namespace std;

int a; //global variable
// global variable's value is automatically initialized

int main()
{
    int Local_var; // local variable
    // local variable is not automatically initialized

    cout <<&Local_var << endl;
    return 0;
}

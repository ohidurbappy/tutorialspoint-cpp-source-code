#include <iostream>

using namespace std;

int main()
{

double* pvalue=NULL;
char* cvalue=NULL;
if(cvalue=new char[100]){

    cvalue="abcde";
    cout<<*cvalue<<endl;
    delete [] cvalue;
}
if(pvalue=new double){

    *pvalue=87.08;
    cout<<"Value of pvalue:"<<*pvalue<<endl;
    delete pvalue;

}else{
cout<<"Dynamic memory allocation failed";
}
    return 0;
}

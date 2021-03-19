#include <iostream>
#include<cstring>
using namespace std;

class book{
public :
    int id;
    string author;
    inline void setAuthor(char x[100]){
     author=x;
    }
    friend void printbook(book Book);
};

void printbook(book Book){
cout<<"Book ID: "<<Book.id<<endl;
cout<<"Book name: "<<Book.author<<endl;
}
int main()
{
    book book1;
    book1.id=76;
    book1.setAuthor("C programming");

    printbook(book1);
    return 0;
}

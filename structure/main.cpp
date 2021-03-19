#include <iostream>
#include<cstring>

using namespace std;
 typedef struct {
 int id;
 char name[100];
 int price;
 } car;

struct book{
int id;
char title[100];
char author[100];

};
int main()
{
struct book book1;
car car1;
car1.id=000001;
strcpy(car1.name,"tata nano");
car1.price=7368;
cout<<"Nmae:"<<car1.name<<endl;
cout<<"Price:"<<car1.price<<endl;


book1.id=8;
strcpy(book1.title,"C programming");
strcpy(book1.author,"Bappy");

cout<<book1.id<<endl;
cout<<book1.title<<endl;
cout<<book1.author<<endl;

}

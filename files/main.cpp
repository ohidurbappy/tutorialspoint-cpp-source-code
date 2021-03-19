#include<fstream>
#include<iostream>

using namespace std;

int main(){
    char name[1000];
    char data[200];
ofstream ofile;
ofile.open("me.txt",ios::app);
cout<<"Writing to the file"<<endl;
cout<<"Enter your name:";
cin>>name;
ofile<<name<<endl;
ofile.close();

ifstream ifile;
ifile.open("me.txt");
//ifile>>data;
ifile.getline(data,1000);
cout<<data;
ifile.close();



}

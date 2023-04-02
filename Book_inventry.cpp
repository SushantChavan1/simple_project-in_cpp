#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class book
{
    
    char name[100],pass[30],bo[20],pu[30],bu[100];
    int copy;
    public:
    int static a;
    int p1,p2,p3;
    book(int p,int q,int r)
    {
        p1=p;
        p2=q;
        p3=r;
    }
    static int stock(); 
    book();
    int valid();
    int entry();
    int buy();
    int e();
};
int book::e()
{
    exit(0);
    return 0;
}
inline int book::buy()
{
    cout<<"Enter the book name::"<<endl;
    cin>>bu;
    cout<<"Price=300"<<endl;
    cout<<"The book dispatched successfully";
    return 0;
}
int book::stock()
{
    cout<<"Book Name"<<"\t\t"<<"copies"<<endl;
    cout<<"Programming in c++"<<"\t"<<"100"<<endl;
    cout<<"Programming in C"<<"\t"<<"50"<<endl;
    cout<<"Programming in HTML"<<"\t"<<"30"<<endl;
    return 0;
}
int book::a=0;
int book::entry()
{ 
    cout<<"Enter deatils here"<<endl;
    cout<<"Enter the book name::";
    cin>>bo;
    cout<<endl;
    cout<<"Enter the publisher name::";
    cin>>pu;
    cout<<"Enter the numbber of copies::";
    cin>>copy;
    cout<<endl;
    cout<<"Data is saved successfully";

    return 0;
}
book::book()
{   a++;
    cout<<"Enter the username"<<endl;
    gets(name);
    cout<<"Enter the password"<<endl;
    gets(pass);
}
int book::valid()
{
    puts(name);
   char a[10]="sush123";
   char b[10]="1234";
   if(strcmp(name,a)==0)
   {
     if(strcmp(pass,b)==0)
     {
        return 0;
     }
   }
   else
   {
    return 1;
   }
}
int main()
{   int o,ch;
    book ob;
    o=ob.valid();
    cout<<"Your visitor count="<<ob.a<<endl;
    if(o==0)
    {
        cout<<"*********************************************************"<<endl;
        cout<<"***************************MENU***************************"<<endl;
        cout<<"1.Entry of new book"<<endl;
        cout<<"2.stock of Book"<<endl;
        cout<<"3.Buy a book"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Enter your choise"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            ob.entry();
         break;
        case 2:
          book::stock();
              break;
        case 3:
           ob.buy();
           break;
        case 4:
           ob.e();
           break;
        default:
            cout<<"Please enter the correct option";
            break;
        }
    }
    else
    {
        cout<<"RE-ENTER THE USER NAME & PASSWORD";
        book ob;
        int n;
        n=ob.valid();
        if(n==0)

        {cout<<"*********************************************************"<<endl;
        cout<<"***************************MENU***************************"<<endl;
        cout<<"1.Entry of new book"<<endl;
        cout<<"2.stock of Book"<<endl;
        cout<<"3.Buy a book"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Enter your choise"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            ob.entry();
         break;
        case 2:
          book::stock();
              break;
        case 3:
           ob.buy();
           break;
        case 4:
           ob.e();
           break;
        default:
            cout<<"Please enter the correct option";
            break;
        }
        }
    }
    return 0;
}

/*This program describe the simple code of an Hotel Management*/
#include<iostream>
using namespace std;
class hotel
{
    public:
    int hotel_R();
    int hotel_p();
    int hotel_other();
};

int hotel::hotel_other()
{
    cout<<"your order is placed"<<endl;
    cout<<"Please wait 10 minits"<<endl;
    return 0;
}
int hotel::hotel_R()
{
   int r[1],r1[5]={1,2,3,4,5};
   cout<<"Enter the room number"<<endl;
   cin>>r[0];
   for(int  i=0;i<5;i++)
   {
       if(r[0]==r1[i])
       {
           cout<<"The room is Avilable"<<endl;
           cout<<"Your booking is successfull"<<endl;
        }
        else{
            cout<<"The room is not Avilable"<<endl;
            break;
        }
   }
    return 0;
}

int hotel::hotel_p(){
    char date,date1=12/9/2023;
    cout<<"Enter the Date you want to book";
    cin>>date;
    if(date==date1){
        cout<<"The date  is allotade"<<endl;
        cout<<"Please Wait";
    }
    else{
    
        cout<<"The booking is done"<<endl;
        cout<<"The booking is successfull"<<endl;
    }
    return 0;
}

int main(){
   
    hotel ob;
    int ch;
    cout<<"*********Menu********"<<endl;
    cout<<"1.Booking Rooms"<<endl;
    cout<<"2.Booking Parties"<<endl;
    cout<<"3.Other"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your chiose"<<endl;
    cin>>ch;
    switch(ch){

        case 1:
        int ch1;
        cout<<"**********Menu**********"<<endl;
        cout<<"1.A.C room"<<endl;
        cout<<"2.Non A.C rooom"<<endl;
        cout<<"3.Exit";
        cout<<"Enter your choise"<<endl;
        cin>>ch1;
        switch(ch1){
            case 1:
              ob.hotel_R();
            
            break;

            case 2:
            ob.hotel_R();
            break;

            case 3:
            exit(0);
            break;

            default:
            cout<<"Enter the correct choise"<<endl;
            break;
        }

        case 2:
           int  ch2;
           cout<<"***********Menu************"<<endl;
           cout<<"1.on hall"<<endl;
           cout<<"2.on ground"<<endl;
           cout<<"3.Exit"<<endl;
           cout<<"Enter your choise"<<endl;
           cin>>ch2;
           switch (ch2)
           {
           case 1:
             ob.hotel_p();
            break;

            case 2:
            ob.hotel_p();
            break;
           
             case 3:
             exit(0);
             break;

           default:
           cout<<"Enter the correct choise"<<endl;
            break;
        }
        case 3:
          int ch3;
          cout<<"*********Menu**********"<<endl;
          cout<<"1.Veg"<<endl;
          cout<<"2.Non.Veg"<<endl;
          cout<<"Enter your choise"<<endl;
          cin>>ch3;
          switch (ch3)
          {
          case 1:
          int ch4;
           cout<<"***********Menu***********"<<endl;
           cout<<"1.veg Thali"<<endl;
           cout<<"2.Veg Fried Rice"<<endl;
           cout<<"3.andl all"<<endl;
           cout<<"Exit"<<endl;
           cout<<"Enter the choise"<<endl;
           cin>>ch4;
           switch (ch4)
           {
              case 1:
              ob.hotel_other();
              break;
             
            case 2:
              ob.hotel_other();
              break;
            case 3:
              ob.hotel_other();
              break;
            case 4:
              exit(0);
              break;

           default:
            break;
           }
          
          default:
            break;
        }
        case 4:
        exit(0);
           break;
        default:
            break;
    } 
    return 0;
}
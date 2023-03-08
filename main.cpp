#include <iostream>

using namespace std;

int menu()  //function
{
    cout<<"::MENU::\n";
    cout<<"1.Add student\n";
    cout<<"2.Show All student\n";
    cout<<"3.Result\n";
    cout<<"4.update student data\n";
    cout<<"0.Exit\n";

 /* int ch;
    cout<<"enter your choice:\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
    cout<<"selection add student\n";
    break;
    case 2:
    cout<<"selection show all student data\n";
    break;
    case 3:
    cout<<"selection result \n";
    break;
    case 4:
    cout<<"selection update student data\n";
    break;
    default:
    cout<<"selection exit\n";
    }
*/

/*
    int g;

       cout<<"enter the size of student data required";
       cin>>g;
*/
return 0;
    }


    struct student  //structure
    {
        char name[50];
        int roll;
        int ds;
        int db;
        int op;
    };

int main()
{

    struct student a[100];
    int i,n;
     int ch;

    menu();
    cout<<"enter your choice:\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
    cout<<"selection add student\n";
    break;
    case 2:
    cout<<"selection show all student data\n";
    break;
    case 3:
    cout<<"selection result \n";
    break;
    case 4:
    cout<<"selection update student data\n";
    break;
    default:
    cout<<"selection exit\n";
    }
    cout<<"\nenter the data required ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nenter the name:";
        cin>>a[i].name;
        cout<<"\nenter the roll no:";
        cin>>a[i].roll;
        cout<<"\nenter the marks of data structure:";
        cin>>a[i].ds;
        cout<<"\nenter the marks of data base management:";
        cin>>a[i].db;
        cout<<"\nenter the marks of object programming:";
        cin>>a[i].op;
        cout<<"------------------------------------------------------------------------------------\n";
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n name:"<<a[i].name;
        cout<<"\n rollno:"<<a[i].roll;
        cout<<"\n marks of DSU:"<<a[i].ds;
        cout<<"\n marks of DBMS:"<<a[i].db;
        cout<<"\n marks of OOP:"<<a[i].op;
        cout<<"\n------------------------------------------------------------------------------------";
    }
   cout<<"\nrecord saved!";

    return 0;
}



 /*
    int ch;
    cout<<"enter your choice:\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
    cout<<"selection add student\n";
    break;
    case 2:
    cout<<"selection show all student data\n";
    break;
    case 3:
    cout<<"selection result \n";
    break;
    case 4:
    cout<<"selection update student data\n";
    break;
    default:
    cout<<"selection exit\n";
    }
    */

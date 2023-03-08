#include <iostream>

using namespace std;
//global varibles
int si,id,sal,ch1,id1,i,ch2,ch3;
   string name,dob,name1,dip1;


void ems()
{
    cout<<"::Employee Management System"<<endl;
    cout<<"1.Admin"<<endl;
    cout<<"2.Manager"<<endl;
    cout<<"3.Employee"<<endl;
    cout<<"0.exit"<<endl;
}
struct ems
{
    int si,id,sal,ch1,id1,i,ch2,ch3;
   string name,dob,name1,dip;

}e[100];
class Admin  //Admin declaration
{

    public:
    void Adminmenu();
    void addnewrecord();
    void particularid();
    void displayallrecord();
    void updaterecord();

};
void Admin::Adminmenu()
{

    cout<<"::Admin::"<<endl;
    cout<<"1.add new record"<<endl;
    cout<<"2.search employee details using particular id"<<endl;
    cout<<"3.display All employee record"<<endl;
    cout<<"4.update record"<<endl;
    cout<<"0.exit"<<endl;

    cout<<"enter your choice"<<endl;
    cin>>ch1;

    switch(ch1)
    {
    case 1:

        addnewrecord();
        break;
    case 2:
        particularid();
        break;
    case 3:
        displayallrecord();
        break;
    case 4:
        updaterecord();
        break;
    default:
        {
            cout<<"process terminated successfully" <<endl;
           // goto c;
            break;

        }

    }


}

void Admin::addnewrecord()

{



    cout<<"enter size"<<endl;
    cin>>si;
    for(i=0;i<si;i++)
    {
    cout<<"__________________________________________________________________________________"<<endl;
    cout<<"enter name of employee"<<endl;
    cin>>e[i].name;
    cout<<"enter id of employee"<<endl;
    cin>>e[i].id;
    cout<<"enter date of birth"<<endl;
    cin>>e[i].dob;
    cout<<"enter department"<<endl;
    cin>>e[i].dip;
    cout<<"enter salary"<<endl;
    cin>>e[i].sal;
    }
    cout<<"__________________________________________________________________________________"<<endl;

    Adminmenu();
}

void Admin::particularid()

{


    cout<<"enter id"<<endl;
    cin>>id1;


for(i=0;i<si;i++)
    {
       if(id1==e[i].id)
       {
         cout<<"name= \t"<<e[i].name<<"id= \t"<<e[i].id<<"DOB= \t"<<e[i].dob<<"salary= \t"<<e[i].sal<<"Department= \t"<<e[i].dip<<endl;

       }
    }

    cout<<"__________________________________________________________________________________"<<endl;


    Adminmenu();
}

void Admin::displayallrecord()
{
    for(i=0;i<si;i++)
    {
        cout<<"name= \t"<<e[i].name<<"id= \t"<<e[i].id<<"DOB= \t"<<e[i].dob<<"salary= \t"<<e[i].sal<<"Department= \t"<<e[i].dip<<endl;
    }

    cout<<"__________________________________________________________________________________"<<endl;


    Adminmenu();
}

void Admin::updaterecord()
{


  cout<<"enter id"<<endl;
  cin>>id1;
  if(id1==e[i].id)
    {
        cout<<"name=    "<<e[i].name<<"id=   "<<e[i].id<<"DOB=    "<<e[i].dob<<"salary=   "<<e[i].sal<<"department=\t"<<e[i].dip<<endl;
    }
  cout<<"enter name to be updated"<<endl;
  cin>>name1;
  cout<<"records updated succesfully"<<endl;
  for(i=0;i<si;i++)
  {
  cout<<"name=     "<<name1<<"id=       "<<e[i].id<<"DOB=    "<<e[i].dob<<"salary=   "<<e[i].sal<<"department=\t"<<e[i].dip<<endl;

  }
cout<<"__________________________________________________________________________________"<<endl;
ems();
}

// Manager declaration
class Manager:public Admin
{
public:
    void Managermenu();
    void detailsbydip();
};
void Manager::Managermenu()
{
     cout<<"::Manager::"<<endl;
   // cout<<"1.Add new record"<<endl;
    cout<<"1.Employee Details by id"<<endl;
    cout<<"2.Employee Details Department"<<endl;
    cout<<"3.Display all records"<<endl;
    cout<<"0.exit"<<endl;

    cout<<"enter your choice"<<endl;
    cin>>ch2;
    switch(ch2)
    {
   // case 1:
        //addnewrecord();
       // break;
    case 1:
        particularid();
        break;
    case 2:
        detailsbydip();
        break;
    case 3:
        displayallrecord();
        break;
    default:
        {
            cout<<"process terminated successfully"<<endl;
            //goto k;
            break;
        }
        Managermenu();
    }

}
void Manager::detailsbydip()
{
    cout<<"enter department"<<endl;
    cin>>dip1;
    for(i=0;i<si;i++)
    {
    if(dip1==e[i].dip)
    {
      cout<<"name=     "<<name1<<"id=       "<<e[i].id<<"DOB=    "<<e[i].dob<<"salary=   "<<e[i].sal<<"department=\t"<<e[i].dip<<endl;
    }

    }
   ems();

 // Managermenu();
}
//employee declaration
class Employee:public Manager
{
public:
   void Employeemenu();

};
void Employee::Employeemenu()
{
    cout<<"::Employee::"<<endl;
    cout<<"1.add new record"<<endl;
    cout<<"2.search employee details using particular id"<<endl;
    cout<<"3.display All employee record"<<endl;
    cout<<"4.update record"<<endl;
    cout<<"0.exit"<<endl;

    cout<<"enter your choice"<<endl;
    cin>>ch3;
    switch(ch3)
    {
    case 1:
        addnewrecord();
        break;
    case 2:
        particularid();
        break;
    case 3:
        displayallrecord();
        break;
    case 4:
        updaterecord();
        break;
        default:
        {
            cout<<"process terminated successfully"<<endl;
           // goto m;
            break;
        }

    }
    ems();
}

int main()
{
   Employee a;

   ems();


   int ch;
   l:cout<<"enter your choice"<<endl;
   cin>>ch;
   switch(ch)
   {
   case 1:
    cout<<"you have selected Admin"<<endl;
    a.Adminmenu();
    cout<<endl;
    ems();
    goto l;
    break;
   case 2:
    cout<<"you have selected Manager"<<endl;
    a.Managermenu();
    cout<<endl;
    ems();
    goto l;
    break;
   case 3:
    cout<<"you have selected Employee"<<endl;
    a.Employeemenu();
    cout<<endl;
    ems();
    goto l;
    break;
    default:
    {
        cout<<"::THANK YOU ALL OPERATION'S TERMINATED SUCCESSFULLY::"<<endl;
        break;
    }

   }

    return 0;
}

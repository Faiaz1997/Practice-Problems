#include <iostream>

using namespace std;

class student
{
    string name;
    int id;
    int credit;
    float cgpa;
public:
   void setvalues();
   void getvalues();
};
void student::setvalues()
{
    cout<<"input name: ";
    cin>>name;
    cout<<"input id: ";
    cin>>id;
    cout<<"input credit: ";
    cin>>credit;
    cout<<"input cgpa: ";
    cin>>cgpa;
}
void student::getvalues()
{
    cout<<"name: "<<name<<endl;
    cout<<"id: "<<id<<endl;
    cout<<"credit: "<<credit<<endl;
    cout<<"cgpa: "<<cgpa<<endl;

}

int main()
{
    student s1[5];int i;char j;


      for (i=0;i<5;i++)
    {

       s1[i].setvalues();
       cout<<"do you want to take more inputs? [y/n]"<<endl;
       cin>>j;
       if (j!='y')
        break;
    }
     for (i=0;i<5;i++)
       s1[i].getvalues();


    }







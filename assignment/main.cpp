#include <iostream>
#include<string>

using namespace std;


class Creature
{

    int Number_Of_Eyes,Number_Of_Legs;
    string Color;
public:
    static int c;
    Creature()
    {
        Number_Of_Eyes=0;
        Number_Of_Legs=0;
        Color="Blank";
    }
    Creature(int noe,int nol,string clr)
    {
        Number_Of_Eyes=noe;
        Number_Of_Legs=nol;
        Color=clr;
    }
    setValues(int ,int ,string)
    {
        Number_Of_Eyes=2;
        Number_Of_Legs=2;
        Color="black";
    }
    void setValues()
    {
        cout<<"Input number of eyes: ";
        cin>>Number_Of_Eyes;
        cout<<"Input number of legs: ";
        cin>>Number_Of_Legs;
        cout<<"Input color: ";
        cin>>Color;
    }
    void getValues()
    {
        c++;
        cout<<"Number of eyes: "<<Number_Of_Eyes<<endl;
        cout<<"Number of legs: "<<Number_Of_Legs<<endl;
        cout<<"Color: "<<Color<<endl;
    }
};
int Creature::c=0;
class Bird
{

    string Color,Name;
public:
    static int c;
    Bird()
    {
        Name="Blank";
        Color="Blank";
    }
    Bird(string nm,string clr)
    {
        Name=nm;
        Color=clr;
    }
    setvalues(string,string)
    {
        Name="Crow";
        Color="Black";
    }

    setvalues()
    {
        cout<<"Input name: ";
        cin>>Name;
        cout<<"Input color: ";
        cin>>Color;

    }
    bool Can_Fly_Or_Not()
{
    string a;
    cout<<"Can fly or not[y/n]? ";
    cin>>a;
    {
    if(a=="y")
    {
    cout<<true<<endl;
    return true;
    }
    else
    {
    cout<<false<<endl;
    return false;
    }
}
}
    getvalues()
    {
        c++;
        cout<<"Name: "<<Name<<endl;
        cout<<"Color: "<<Color<<endl;
    }
};
int Bird::c=0;
int main()
{
    Creature c1,c2(1,2,"Red");
    {
    c1.setValues();
    c1.getValues();
    c2.getValues();
    cout<<"Number of objects in Creature class: "<<Creature::c<<endl;
    }

    Bird r1,r2("Parrot","Green");
    r1.setvalues();
    r1.getvalues();
    r1.Can_Fly_Or_Not();
    r2.getvalues();
    cout<<"Number of objects in Bird class: "<<Bird::c<<endl;
}

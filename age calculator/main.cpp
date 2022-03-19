#include <iostream>
#include<stdlib.h>
using namespace std;
class input
{
protected:
    int year,month,day,cr,cm,cd;
public:
    setv()
    {
        cout<<"Input your birthday: "<<endl;
        cout<<"Day: ";
        cin>>day;
        cout<<"Month: ";
        cin>>month;
        cout<<"Year: ";
        cin>>year;cout<<"Input current date: "<<endl;
        cout<<"Day: ";
        cin>>cd;
        cout<<"Month: ";
        cin>>cm;
        cout<<"Year: ";
        cin>>cr;
    }
    get()
    {
        cout<<"Birthday: "<<day<<"/"<<month<<"/"<<year<<endl;
    }
    calculate()
    {
        int a1,a2,a3;
        if(cr<=year)
            a1=year-cr;
            else
            a1=cr-year;
        if(cm<=month)
            a2=month-cm;
            else
            a2=cm-month;
        if(cd<=day)
            a3=day-cd;
            else
            a3=cd-day;
        cout<<"Age: "<<a1<<" Years "<<a2<<" Months "<<a3<<" Days ";
    }
};
int main()
{
    char choice;
    cout<<"A.Age calculator"<<endl;
    cout<<"B.Exit"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    switch(choice)
    {
    case'A':
    input i1;
    i1.setv();
    i1.get();
    i1.calculate();
    break;
    case'B':
    break;
    }
    cout<<endl;
system("pause");


}

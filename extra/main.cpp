#include<iostream>
using namespace std;
int a;
int c1=0,c2=0,c3=0,c4=0;
int count=0;
class cars
{
int wheels,weight;
public:

    void setvalues();
    void getvalues();
    ~cars()
{
    cout<<"object has been destroyed"<<endl;
}
};
void cars::setvalues()
   {
            cout<<"input weight: "<<endl;
            cin>>weight;
            cout<<"input wheels: "<<endl;
            cin>>wheels;
    }
  void cars::getvalues()
    {
     cout<<"number of wheels: "<<wheels<<endl;
     cout<<"weight: "<<weight<<endl;
if(wheels<=4)
{
    c1++;
    cout<<"light vehicle"<<endl;
}
else if(wheels>4&& wheels<=8)
{
    c2++;
    cout<<"medium vehicle"<<endl;
}
else if(wheels>8&& wheels<=12)
{
    c3++;
    cout<<"heavy vehicle"<<endl;
}
else if(wheels>12)
{
    c4++;
    cout<<"extra heavy vehicle"<<endl;
}
}
main()
{
    cout<<"how many cars information do you want to input?"<<endl;
    cin>>a;
    cars car[a];
    int i,weight;
        for (i=0;i<a;i++)
        {
        car[a].setvalues();
        cout<<endl;
        cout<<endl;
        {
            car[a].getvalues();
        }
        cout<<endl;
        count++;
        }

        cout<<"count number is: "<<count<<endl;
        cout<<"number of light vehicles: "<<c1<<endl;
        cout<<"number of medium vehicles: "<<c2<<endl;
        cout<<"number of heavy vehicles: "<<c3<<endl;
        cout<<"number of extra heavy vehicles: "<<c4<<endl;
}

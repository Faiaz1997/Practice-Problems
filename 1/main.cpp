#include <iostream>
using namespace std;

void swapValues(int a, int b);
float vat(float a);
float contestants(float a,float b);
float interest(float a,float b,float c);

int main()
{
    int m,n;
    float a;
    float x=24,y=50000,z=5;

    cout<<"Enter two values:\n";
    cin>>m>>n;
    swapValues(m,n);
    cout<<"input amount:\n";
    cin>>a;
    vat(a);
    contestants(200,25);
    interest(x,y,z);


}

void swapValues(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"after swap: "<<endl;
    cout<<a<<"\n"<<b<<endl;
}

float  vat(float a)
{
     float v;
     v=a*13.6/100;
     cout<<"vat:";
     cout<<v<<"%"<<endl;

}
float contestants(float a,float b)
{
    float x;
    x=a/b;
    cout<<"contestants for each seat:";
    cout<<x<<endl;
}
float interest(float a,float b,float c)
{
    float interest;
    interest=(a*b*c)/100;
    cout<<"interest:";
    cout<<interest<<" taka"<<endl;
}

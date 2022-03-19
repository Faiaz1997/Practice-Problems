#include <iostream>


using namespace std;
float square(float a);
float rectangle(float a,float b);
float triangle(float a,float b);
float circle (float a);

int main()
{
    float a,b,c,d,e,f;
    cout<<"input side of square:"<<endl;
    cin>>a;
    square(a);
      cout <<"input length of rectangle:"<< endl;
    cin>>b;
      cout <<"input width of rectangle:"<< endl;
    cin>>c;
    rectangle(b,c);
      cout <<"input base of triangle:"<< endl;
    cin>>d;
      cout <<"input height of triangle:"<< endl;
    cin>>e;
    triangle(d,e);
      cout <<"input radius of circle:"<< endl;
    cin>>f;
    circle(f);
}
float square(float a)
{
    float area,perimeter;
    area=a*a;
    perimeter=4*a;
    cout<<"area of square:"<<area<<endl;
    cout<<"perimeter of square:"<<perimeter<<endl;
}
float rectangle(float a,float b)
{
    float area,perimeter;
    area=a*b;
    perimeter=2*(a+b);
    cout<<"area of rectangle:"<<area<<endl;
    cout<<"perimeter of rectangle:"<<perimeter<<endl;
}
float triangle(float a,float b)
{
    float area,perimeter,x,y,z;
    cout<<"input sides of triangle:"<<endl;
    cin>>x>>y>>z;
    area=(a*b)/2;
    perimeter=x+y+z;
    cout<<"area triangle:"<<area<<endl;
    cout<<"perimeter of triangle:"<<perimeter<<endl;
}
float circle(float a)
{
    float area,perimeter;
    area=3.14*a*a;
    perimeter=2*3.14*a;
    cout<<"area of circle:"<<area<<endl;
    cout<<"perimeter of circle:"<<perimeter<<endl;
}

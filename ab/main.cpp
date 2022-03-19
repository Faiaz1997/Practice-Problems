
#include <iostream>
using namespace std;

class Box
{
protected:
    int height,width;
public:
    virtual void area()=0;
    virtual void greetings()=0;
};
class Rectangle:public Box
{
    int breadth;
public:
    void greetings()
    {
        cout<<"hello"<<endl;
    }
    void area()
    {
        cout<<"area: "<<height*width<<endl;
    }
};

int main()
{
    Box *b1;
    Rectangle r1;
    b1=&r1;
    b1->greetings();

}

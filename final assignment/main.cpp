#include<iostream>
using namespace std;

class shape
{
public:
    int dim1,dim2;

    setDimensions(int d1,int d2)
        {
        dim1=d1;
        dim2=d2;
        }
 };
class triangle:public shape
{
public:
    getArea()
        {
        return 0.5*dim1*dim2;
        }
};
class rectangle:public shape
{
public:

    getArea()
        {
        return dim1*dim2;
        }

};
int main()
{
triangle t;
t.setDimensions(6, 2);

rectangle r;
r.setDimensions(6, 2);

cout << "area of triangle: " << t.getArea() << endl;
cout << "area of rectangle: " << r.getArea() << endl;

return 0;
}

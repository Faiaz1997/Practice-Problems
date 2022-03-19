#include <iostream>

using namespace std;
template<class t,class t2>
void add(t a,t2 b)
{
    cout<<a+b<<endl;
}

int main()
{
    add(4,5);
    add(4.5,6.5);
    return 0;
}

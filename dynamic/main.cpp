#include <iostream>
using namespace std;

int main()
{
    int *a,i;
    a=new int[5];
    cout<<"input values"<<endl;
    for(i=0;i<5;i++)
    {
       cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    delete []a;
}

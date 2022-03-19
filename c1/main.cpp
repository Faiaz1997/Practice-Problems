#include <iostream>

using namespace std;

int main()
{
    int size=10;
    int array[size],i,reverse[size],j;
    cout<<"input elements of the array: "<<endl;
    for(i=1;i<=size;i++)
    {
         cin>>array[i];
    }

    for(i=1;i<=size;i++)
    {
       reverse[i]=array[i]*3;
    }
    cout<<endl;
    cout<<"multiplied by 3 & reversed: "<<endl;
     for(i=size;i>=1;i--)
    {
       cout<<reverse[i]<<" ";
    }
    cout<<endl;



}

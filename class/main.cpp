#include<iostream>

using namespace std;
int insertatfirst()
{
    int size=4;
    int a[size],i;
    cout <<"Enter values: "<<endl;
    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }

    for(i=size-1;i>=0;i--)
    {
        a[i+1] = a[i];
    }
    int add;
    cout <<"Enter the number you want to add to the first: "<<endl;
    cin >> add;
    a[0] = add;
    size= size+1;
     for (i=0;i<size;i++)
     {
       cout << a[i] << " ";

     }

}
int insertatmiddle()
{
    int size=4,i;
    int a[size];
    int mid=size/2;

    cout <<"Enter values: "<<endl;

    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }

    for(i=size-1;i>=mid;i--)
    {
        a[i+1] = a[i];
    }
    int add;
    cout <<"Enter the number you want to add in the middle: "<<endl;
    cin >> add;

    a[mid] = add;
    size= size+1;
     for (i=0;i<size;i++)
     {
       cout << a[i] << " ";

     }

}
int insertatlast()
{
    int size=4;
    int a[size],i;
    cout <<"Enter values: "<<endl;
    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }
    int add;
    cout <<"Enter the number you want to add to the last: "<<endl;
    cin >> add;
    a[size] = add;
    size= size+1;
     for (i=0;i<size;i++)
     {
       cout << a[i] << " ";

     }

}
int deletefromfirst()
{
    int size=5,i;
    int a[size];
    cout <<"Enter Values: "<<endl;
    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<size;i++)
    {
      a[i]=a[i+1];
    }
    for(i=0;i<size-1;i++)
    {
        cout << a[i] << " ";
    }

}
int deletefrommiddle()
{
    int size=5,i;
    int a[size],mid;
    mid=size/2;
    cout <<"Enter Values: "<<endl;
    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }
    for(i=mid;i<size;i++)
    {
      a[i]=a[i+1];
    }
    for(i=0;i<size-1;i++)
    {
        cout << a[i] << " ";
    }

}
int deletefromlast()
{
    int size=5,i;
    int a[size];
    cout <<"Enter Values: "<<endl;
    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }
    for(i=size;i<size;i++)
    {
      a[i]=a[i+1];
    }
    for(i=0;i<size-1;i++)
    {
        cout << a[i] << " ";
    }

}

int main()
{
        cout<<"#insert at first "<<endl;
        insertatfirst();
        cout<<endl;
        cout<<"#insert at middle "<<endl;
        insertatmiddle();
        cout<<endl;
        cout<<"#insert at last "<<endl;
        insertatlast();
        cout<<endl;
        cout<<"#delete from first "<<endl;
        deletefromfirst();
        cout<<endl;
        cout<<"#delete from middle "<<endl;
        deletefrommiddle();
        cout<<endl;
        cout<<"#delete from last "<<endl;
        deletefromlast();

}





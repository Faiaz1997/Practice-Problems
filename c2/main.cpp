#include<iostream>

using namespace std;


int main(){

    int size=4;
    int a[size];
    int mid=size/2;

    cout <<"Enter values: "<<endl;

    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }

    for(int i=size-1;i>=mid;i--)
    {
        a[i+1] = a[i];
    }
    int add;
    cout <<"Enter the number you want to add on the middle: "<<endl;
    cin >> add;

    a[mid] = add;
    size= size+1;
     for (int i=0;i<size;i++)
     {
       cout << a[i] << " ";

     }

}

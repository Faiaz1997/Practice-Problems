#include<iostream>

using namespace std;

int main()
{
int A[2][3],n;
cout <<"Enter The Values of The Matrix: "<<endl;
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cin >> A[i][j];
    }
}
cout <<"Enter The Number You Want to find: ";
cin >> n;
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
       if(A[i][j]==n)
       {
         cout << i <<" "<< j ;
       }
    }
}



}

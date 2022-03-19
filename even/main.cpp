#include <iostream>

using namespace std;

int main()
{
int a,b,c,s=111112;
cout<<"input first value: ";
cin>>a;
cout<<"input second value: ";
cin>>b;
for(c=a;c<=b;c++)
{
       if(c%2==0)
       {
           s=s*c;
           cout<<s<<endl;
       }


}

}

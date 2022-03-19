#include <iostream>

using namespace std;

int main()
{
   int a[100],i, j, k=0;
   int a_size, x, cnt=0;
   cout<<"Enter the Size of Array (max.100): ";
   cin>>a_size;
   cout<<"Enter "<<a_size<<" Elements for the Array: ";
   for(i=0; i<a_size; i++)
      cin>>a[i];
   int c[]={};
   for(i=0; i<a_size; i++)
   {
      for(j=1; j<a_size; j++)
      {
         if(a[i]!=a[j])
         {
           k++;
         }
         else{
            a[i]=a[j];
         }
      }
   }
   for(i=0;i<a_size;i++)
   {
       cout<<a[i]<<endl;
   }

}


#include <iostream>

using namespace std;

int main()
{
   int a[100], b[100], c[100], i, j, k=0;
   int a_size, b_size, x, cnt=0;
   cout<<"Enter the Size of First Array (max.100): ";
   cin>>a_size;
   cout<<"Enter "<<a_size<<" Elements for First Array: ";
   for(i=0; i<a_size; i++)
      cin>>a[i];
   cout<<"Enter the Size of Second Array (max.100): ";
   cin>>b_size;
   cout<<"Enter "<<b_size<<" Elements for Second Array: ";
   for(i=0; i<b_size; i++)
      cin>>b[i];
   for(i=0; i<a_size; i++)
   {
      for(j=0; j<b_size; j++)
      {
         if(a[i]==b[j])
         {
            for(x=0; x<k; x++)
            {
               if(a[i]==c[x])
                  cnt++;
            }
            if(cnt==0)
            {
               c[k] = a[i];
               k++;
            }
         }
      }
   }
   if(k==0)
      cout<<"\nCommon Element not Found!";

   else
   {
      cout<<k<<" Common element(s) found:\n";
      for(i=0; i<k; i++)
         cout<<c[i]<<" ";
   }
   cout<<endl;
}

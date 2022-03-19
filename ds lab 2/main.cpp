#include <iostream>

using namespace std;

int main()
{
        int arr1[] = {10,20,30,40,50};
        int arr2[] = {1,2,3,4,5,6,7,8};
        int i,m= sizeof(arr1)/sizeof(arr1[0]),n= sizeof(arr2)/sizeof(arr2[0]),x= m+n,arr3[x];

        for(i=0;i<m;i++){
            arr3[i]=arr1[i];
        }
          for(i=0;i<n;i++){
            arr3[i+m]=arr2[i];
        }

          for(i=x-1;i>0;i--){
            cout<< arr3[i] << ' ';
        }

}

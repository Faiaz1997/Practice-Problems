#include <iostream>
using namespace std;

int main()
{
    int A[2][3]={1,2,3,4,5,6}, B[2][3]={1,2,1,2,1,2}, C[2][3], i, j;
    for(i = 0; i < 2; ++i)
    {
        for(j = 0; j < 3; ++j)
        C[i][j] = A[i][j] + B[i][j];

    }
    cout <<"Sum of two matrix is: " << endl;
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
        {
            cout << C[i][j] << "  ";
        }

    return 0;
}



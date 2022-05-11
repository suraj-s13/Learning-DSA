#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    p = new int [10];
    p[9] = A[9];
    for (int i = 0; i < 10; i++)
    {
        p[i]=A[i];
        cout<<p[i]<<" ";
        
    }
    cout<<endl;
    //for (int i = 0; i < 10; i++)
   // {
    //    cout<<A[i];
    //    
    //}
    return 0;
}
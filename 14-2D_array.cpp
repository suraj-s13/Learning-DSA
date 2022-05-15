#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{3,6,2,7}};  //inside stack

    int *ar[3];    //inside stack
    ar[0] = new int(4);
    ar[1] = new int(4);     //inside heap
    ar[2] = new int(4);

    int i,j;
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 4; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
       
    }
    cout<<endl;
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 4; j++)
       {
           cout<<ar[i][j]<<" ";
       }
       cout<<endl;
       
    }
    

    return 0;
}
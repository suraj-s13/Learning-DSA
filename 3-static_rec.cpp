#include <iostream>
using namespace std;
// int x = 0; (same result)
int fun(int n){
    static int x = 0;
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
        
    }
    return 0;
    
}
int main()
{
    int a = 5;
    cout<<fun(a);
    return 0;
}
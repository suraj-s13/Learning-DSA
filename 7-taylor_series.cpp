#include <bits/stdc++.h>
using namespace std;

int series(int x, int y){
    static int p=1,f=1;
    int r;
    if(y==0){
        return 1;
    }
    else{
        r = series(x, y-1);
        p=p*x;
        f=f*y;
        return r+p/y;
    }
}

int main()
{
    cout<<series(1,10);
    return 0;
}

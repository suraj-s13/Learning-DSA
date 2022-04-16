#include <bits/stdc++.h>
using namespace std;

int pow(int m, int n){
    if(n==0) return 1;
    else return pow(m,m-1)*m;
}


// *******************************
// factorial
// int fact (int n){
//     if (n==0) return(1);
//     else return fact(n-1)*n;
// }
// int main(){
//     int a;
//     a=fact(5);
//     cout<<a;
// }
// ***************************
// sum of n number
// int sum (int n){
//     if (n==0)       
//     return 0;
//     else
//     return sum(n-1)+n;
// }
// int main()
// {   int a;
//     a = sum(5);
//     cout<<a;
//     return 0;
// }
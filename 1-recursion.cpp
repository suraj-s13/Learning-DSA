#include <iostream>
using namespace std;

void fun(int n);
    
int main(){
    int x = 4;
    fun(x);
}
void fun(int n){

    if (n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }}
    
// int calculator(int x, int y){
//     cout<<x+y<<endl;
//     cout<<x*y<<endl;
// }
// int main()
// {
//     int x;
//     cin>>x;
//     if (x<=12)
//     {
//         cout<<"The given no is:"<<x<<endl;
//         calculator(12,13);
//     }
    
    
//     return 0;
// }
/*
1. Tail - calling itself and that recussive call is the last statement in the function.
***** 
  fun(n){
      if(condition){
          .............
          fun(n-1)   .....calling it self
      }
  }
        every thing is perfomed at calling time only
        not at returning time.
*****
using loop same function can be written as.....
void fun (int n){
    while(n>0){
        cout<<n;
        n--;
    }
**********************************************
2. Head - calling itself and that recussive call is the first statement inside the function other process are done later.
******
void fun(int n){
      if(n<0){
          fun(n-1)   .....calling it self
          .............
          .............
      }
  }
*****
using loop same function can be written as.....
void fun (int n){
    int i = 1;
    while(i<=n){
        cout<<i;     ////we can not directly convert in loop.
        i++              the other;
    }
  }
************************************************
Linear recussion when a funtion is is calling it self only one tyme is called linear recussion.
3. Tree - when a funtion is is calling it self more then one tyme is called tree recussion.
******
void fun(int n){
      if(n<0){
          fun(n-1);
          fun(n-1);
          .............
          .............
      }
  }
*****
4. Indirect
5. Nested - 
*/
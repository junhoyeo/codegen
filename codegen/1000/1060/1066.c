/**************************************************************
    Problem: 1066
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int s=0; // sum (총합)
    int n=0; // number (입력되는 문자의 수)
    while(1){
        int a;scanf("%d",&a);
        s+=a;
        n++;
        if(a>=100){
            printf("%d\n%.1lf",s,s/(double)n);
            break;
        }
    }
}
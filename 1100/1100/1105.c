/**************************************************************
    Problem: 1105
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a=65; // 문자 인덱스 (아스키로 A=65니까 하나씩 올릴 때마다 다음으로 출력할 문자가 나와)
    int b=0; // 숫자 인덱스 (역시 0부터 찍으니까 하나씩 올려주면 되겠지!)
    for(int i=0;i<n;i++){ // n개 줄을 만들어 주면 돼!
        for(int j=0;j<n-i;j++) printf("%c ",a++); // 먼저 문자들로 거꾸로 된 삼각형을 만들고
        // n=3이면 각각 3, 2, 1개 문자를 출력하니까 이것만 쓰면 아래처럼 될 거야 
        // A B C
        // D E 
        // F
        for(int j=0;j<i;j++) printf("%d ", b++); 
        // 입력받은 수 n에서 삼각형의 한 줄을 만들 때 찍은 문자 수를 빼주자!
        // 즉 n-(n-i)인데 식 정리하면 i니까 i개 출력해 주면 돼!

        // 아래는 n=3일 때 예제니까 각 줄마다 설명을 참고해줘!
        // A B C : 문자 찍은 수 3, 3-3=0 이므로 0개 숫자를 찍음
        // D E 0 : 문자 찍은 수 2, 3-2=1 이므로 1개 숫자를 찍음 
        // F 1 2 : 문자 찍은 수 1, 3-1=2 이므로 2개 숫자를 찍음 
        printf("\n"); // 한 줄 개행하기 
    }
}

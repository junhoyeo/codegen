/**************************************************************
    Problem: 1077
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a;scanf("%d",&a); // 정수(int) 하나를 입력받아서 a에 저장
    int s=0; // s라는 변수를 하나 만들게. a ~ 100 합을 하나씩 더해나갈 변수야.
    // 처음에는 당연히 0이여야겠지? 물론 a로 두고 a + 1부터 100까지 더해도 되긴 하겠는데 그럼 귀찮아.
    for(int i=a; i<=100; i++) // a부터 시작해서 100보다 작거나 같은 한 반복하자. 그럼 a ~ 100 나오겠지?
        s+=i; // s에 i 더해서 저장하자. 그러면 s에 숫자들이 점점 더해지겠지.
    printf("%d",s); // 그래서 a ~ 100 합이 나와!
}

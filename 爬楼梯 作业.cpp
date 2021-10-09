#include<stdio.h>
//递推  可得f(n)=f(n-1)+f(n-2) 
//用嵌套循环实现f（n） 
int fact(int);
int main()
{
    int n,y;
    scanf("%d",&n);
    y=fact(n);
    printf("%d",y);
    return 0;
}
int fact(int n)
{
    int k;
    if(n==1)
        k=1;
    else
        k=n*fact(n-1);
    return k;
}
// 最好时间复杂度O（1）
// 最坏：O（1） 平均： O(1)
 
 

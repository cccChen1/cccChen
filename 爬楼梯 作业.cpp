#include<stdio.h>
//����  �ɵ�f(n)=f(n-1)+f(n-2) 
//��Ƕ��ѭ��ʵ��f��n�� 
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
// ���ʱ�临�Ӷ�O��1��
// ���O��1�� ƽ���� O(1)
 
 

//用递归和非递归两种方式求n!问题
#include<iostream>
#include<system_error>
using namespace std;
//递推 
int fun(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * fun(n - 1);
	}

}
//递推 
int fun2(int n)
{
	int value = 1;
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		for (int i = 2; i <= n; i++) {
			value *= i;
		}
		return value;
	}

}

int main(int argc, char* argv[])
{
	int n;
	cout << "输入一个整数，按Q/q退出:" << endl;
	while (scanf_s("%d", &n) == 1)
	{
		if (n >= 0) {
			//递归方法
			//	cout << n << "!=" << fun(n) << endl;

			//非递归方法
			cout << n << "!=" << fun2(n) << endl;
		}
		else {
			cout << "输入数据有误，请重新输入一个正整数！" << endl;
		}
	}
	system("pause");
	return 0;
}
//递推复杂度
//最快O（1） 最差O（n） 平均O（n） 

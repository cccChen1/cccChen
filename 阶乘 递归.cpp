//�õݹ�ͷǵݹ����ַ�ʽ��n!����
#include<iostream>
#include<system_error>
using namespace std;
//���� 
int fun(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * fun(n - 1);
	}

}
//���� 
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
	cout << "����һ����������Q/q�˳�:" << endl;
	while (scanf_s("%d", &n) == 1)
	{
		if (n >= 0) {
			//�ݹ鷽��
			//	cout << n << "!=" << fun(n) << endl;

			//�ǵݹ鷽��
			cout << n << "!=" << fun2(n) << endl;
		}
		else {
			cout << "����������������������һ����������" << endl;
		}
	}
	system("pause");
	return 0;
}
//���Ƹ��Ӷ�
//���O��1�� ���O��n�� ƽ��O��n�� 

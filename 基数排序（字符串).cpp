#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    cout << a[0] << endl << a[1] << endl << a[2] << endl;
    return 0;
}
///*�㷨����������*/
//
//#include <iostream>
//
//using namespace std;
///*********************************************************
//Function:rxsort
//Description:��������
//Input:
//    ����A[l,h]��
//    ���������Ԫ�ص�λ��d�����������Ϊ999����dΪ3��
//    ������k�������10��������kΪ10��
//Output:����õ����飻
//Others��������1234��˵��Ԥ����0λΪ4����1λΪ3���������ƣ�
//*********************************************************/
//bool rxsort(int A[], int l, int h, int d, int k) {
//    if (NULL == A || l > h)
//        return false;
//    int size = h - l + 1;
//
//    int* counts = new int[k];//���ڼ�������ĸ������ݣ������������
//    int* temp = new int[size];//���ڴ洢�������������
//    int index;
//    int pval = 1;
//    //���δ���ͬ��λ
//    for (int i = 0; i < d; i++) {
//        //counts��������
//        for (int j = 0; j < k; j++)
//            counts[j] = 0;
//
//        for (int j = l; j <= h; j++) {
//            /*
//            1.data[j]/pval��ȥ������data[j]�ĺ�i���������磺
//            ��data[j]=1234,i=2ʱ����ʱpval=100,data[j]/pval=12;
//            2.(data[j]/pval)%k��ȡ����data[j]/pval�����һλ��
//            3.(int)(data[j]/pval)%k:ȡ����data[j]�ĵ�iλ��
//            */
//            index = (int)(A[j] / pval) % k;
//            /*
//            ͳ������A��ÿ�����ֵĵ�iλ���и������ֵ�Ƶ��,���ڼ�������
//            */
//            counts[index]++;
//        }
//        //�����ۼ�Ƶ�����û���������
//        for (int j = 1; j < k; j++)
//            counts[j] = counts[j] + counts[j - 1];
//        //ʹ�õ�����i+1λ����A��������
//        for (int j = h; j >= l; j--) {
//            index = (int)(A[j] / pval) % k;
//            temp[counts[index] - 1] = A[j];
//            counts[index]--;
//        }
//        //������iΪ�������Ľ�����������A��
//        for (int j = 0; j < size; j++)
//            A[j + l] = temp[j];
//        //����pval
//        pval = pval * k;
//    }
//    delete[] counts;
//    delete[] temp;
//}
//
//int main() {
//    int A[] = { 712,303,4,18,89,999,70,26 };
//    rxsort(A, 0, 7, 3, 10);
//    for (int i = 0; i < 8; i++)
//        cout << A[i] << " ";
//}
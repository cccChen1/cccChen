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
///*算法：基数排序*/
//
//#include <iostream>
//
//using namespace std;
///*********************************************************
//Function:rxsort
//Description:基数排序
//Input:
//    数组A[l,h]；
//    数组中最大元素的位数d，例如最大数为999，则d为3；
//    进制数k，如果是10进制数，k为10；
//Output:排序好的数组；
//Others：对数字1234来说，预定第0位为4，第1位为3，依次类推；
//*********************************************************/
//bool rxsort(int A[], int l, int h, int d, int k) {
//    if (NULL == A || l > h)
//        return false;
//    int size = h - l + 1;
//
//    int* counts = new int[k];//用于计数排序的辅助数据，详见计数排序
//    int* temp = new int[size];//用于存储重新排序的数组
//    int index;
//    int pval = 1;
//    //依次处理不同的位
//    for (int i = 0; i < d; i++) {
//        //counts数组清零
//        for (int j = 0; j < k; j++)
//            counts[j] = 0;
//
//        for (int j = l; j <= h; j++) {
//            /*
//            1.data[j]/pval：去掉数字data[j]的后i个数，例如：
//            当data[j]=1234,i=2时，此时pval=100,data[j]/pval=12;
//            2.(data[j]/pval)%k：取数字data[j]/pval的最后一位数
//            3.(int)(data[j]/pval)%k:取数字data[j]的第i位数
//            */
//            index = (int)(A[j] / pval) % k;
//            /*
//            统计数组A中每个数字的第i位数中各个数字的频数,用于计数排序；
//            */
//            counts[index]++;
//        }
//        //计算累加频数，用户计数排序
//        for (int j = 1; j < k; j++)
//            counts[j] = counts[j] + counts[j - 1];
//        //使用倒数第i+1位数对A进行排序
//        for (int j = h; j >= l; j--) {
//            index = (int)(A[j] / pval) % k;
//            temp[counts[index] - 1] = A[j];
//            counts[index]--;
//        }
//        //将按第i为数排序后的结果保存回数组A中
//        for (int j = 0; j < size; j++)
//            A[j + l] = temp[j];
//        //更新pval
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
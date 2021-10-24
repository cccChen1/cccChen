#include <iostream>
#include <math.h>

using namespace std;
//判断数组存在
bool bubbleSort(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }

    //遍历整个数组
    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {
        bool isExchanged = false;
        for (int i = 0; i < arrLen - orderedNum - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isExchanged = true;//对比大小并交换,isExchanged返回true
            }
        }
        if (!isExchanged) {
            break;
        }
    }
    return true;
}
//输出数组
void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
//测试数组
int main() {
    int array0[] = {0};
    int arrayLen = sizeof(array0) / sizeof(int);

    printArray(array0, arrayLen);//输出初始数组
    bubbleSort(array0, arrayLen);//调用冒泡排序
    printArray(array0, arrayLen);//输出排序后的数组

    cout << "=========================================" << endl;

    int array1[] = { 1 };
    arrayLen = sizeof(array1) / sizeof(int);

    printArray(array1, arrayLen);
   bubbleSort(array1, arrayLen);
    printArray(array1, arrayLen);

    cout << "=========================================" << endl;

    int array2[] = { 2, 1 };
    arrayLen = sizeof(array2) / sizeof(int);

    printArray(array2, arrayLen);
    bubbleSort(array2, arrayLen);
    printArray(array2, arrayLen);

    cout << "=========================================" << endl;

    int array3[] = { 1, 5, 3 };
    arrayLen = sizeof(array3) / sizeof(int);

    printArray(array3, arrayLen);
    bubbleSort(array3, arrayLen);
    printArray(array3, arrayLen);


    cout << "=========================================" << endl;

    int array4[] = { 9, 12, 8, 7 };
    arrayLen = sizeof(array4) / sizeof(int);

    printArray(array4, arrayLen);
    bubbleSort(array4, arrayLen);
    printArray(array4, arrayLen);

    cout << "=========================================" << endl;

    int array5[] = { 9, 12, 8, 7, 3 };
    arrayLen = sizeof(array5) / sizeof(int);

    printArray(array5, arrayLen);
    bubbleSort(array5, arrayLen);
    printArray(array5, arrayLen);


}
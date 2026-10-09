#include <iostream>
using namespace std;

class MyClass {
public:
    void fun(int *funArray, int count) {
        if (count <= 0) {
            // 传入 0 等异常值
            return;
        }
        // 获取最小值的下标
        int index = 0;
        for (int i = 0; i < count; ++i) {
            if (funArray[index] > funArray[i]) {
                index = i;
            }
        }
        // 交换
        int temp;
        temp = funArray[index];
        funArray[index] = funArray[count - 1];
        funArray[count - 1] = temp;
    }

    // 打印数组
    // 偷懒了懒得重复写就直接封装到 class 了
    void printArray(int *funArray, int count) {
        for (int i = 0; i < count; ++i) {
            cout << funArray[i] << " ";
        }
    }
};

int main() {
    MyClass *my = new MyClass();
    int array[] = {5, 34, 1, 2, 56, 4};
    int count = 6;
    cout << "测试样例：";
    my->printArray(array, count);
    cout << endl;
    // 排序 array
    my->fun(array, count);
    cout << "输出样式：";
    my->printArray(array, count);
    cout << endl;
    return 0;
}
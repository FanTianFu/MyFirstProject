#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false; // 交换标志位
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); // 交换
                swapped = true;
            }
        }
        if (!swapped) { // 如果没有交换，说明已经有序
            break;
        }
    }
}

int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // 初始化随机数生成器

    int size = 10; // 数组大小
    int min = 1;   // 最小值
    int max = 100; // 最大值

    std::vector<int> arr(size);
    
    // 生成随机数
    for (int i = 0; i < size; ++i) {
        arr[i] = generateRandomNumber(min, max);
    }

    std::cout << "排序前的数组: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr); // 执行冒泡排序

    std::cout << "排序后的数组: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

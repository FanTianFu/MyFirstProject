#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false; // ������־λ
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); // ����
                swapped = true;
            }
        }
        if (!swapped) { // ���û�н�����˵���Ѿ�����
            break;
        }
    }
}

int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // ��ʼ�������������

    int size = 10; // �����С
    int min = 1;   // ��Сֵ
    int max = 100; // ���ֵ

    std::vector<int> arr(size);
    
    // ���������
    for (int i = 0; i < size; ++i) {
        arr[i] = generateRandomNumber(min, max);
    }

    std::cout << "����ǰ������: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr); // ִ��ð������

    std::cout << "����������: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

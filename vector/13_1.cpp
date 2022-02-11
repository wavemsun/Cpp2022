#include <iostream>
#include <vector>

std::vector<int> enterElement(std::vector<int> vec) {
    for(int i = 0; i < vec.size(); ++i) {
        std::cin >> vec[i];
    }
    return vec;
}

std::vector<int> deletElement(std::vector<int> vec, int k) {
    std::vector<int> new_vec;
    for(int i = 0; i < vec.size(); ++i) {
        if (vec[i] != k) {
            new_vec.push_back(vec[i]);   
        }
    }
    vec = new_vec;
    return vec;
}

void printElement(std::vector<int> vec) {
    for(int i = 0; i < vec.size(); ++i) {
        std::cout << "  " << vec[i];
    }
    std::cout << std::endl;
}

int main() 
{
    int n, k;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Enter elements: " << std::endl;
    vec = enterElement(vec);
    std::cout << "Enter deleting element: ";
    std::cin >> k;
    vec = deletElement(vec, k); 
    std::cout << std::endl;
    printElement(vec);
    std::cout << std::endl;
    return  0;
}


// Задача 1. 
 
// Пользователь вводит с клавиатуры число n, далее -- n целых чисел, которые нужно записать 
// в вектор.
// Потом пользователь вводит ещё одно значение. Нужно удалить из вектора все элементы, 
// которые равны 
// данному значению, и вывести итоговое состояние вектора

// Пример:
// Пользователь ввёл 5, потом числа 1, 3, 3, 5, 1. И потом -- число 3. Необходимо, чтобы в 
// векторе остались 
// числа 1, 5, 1, которые надо вывести их на экран. 
#include <iostream>
#include <vector>
std::vector<int> deletElement (std::vector<int> vec, int k) 
{
    for(int i = 0; i < vec.size(); ++i) 
    {
        std::cin >> vec[i];
    }
    return vec;
}

int main() {
    int n, k;
    std::cout << "Enter number of numers: ";
    std::cin >> n;
    std::vector<int> vec(n);
    //std::cout << std::endl;
    for(int i = 0; i < vec.size(); ++i) 
    {
        std::cin >> vec[i];
    }
    for(int i = 0; i < vec.size(); ++i) 
    {
        std::cout << vec[i] << "  ";
    }
    
    return  0;
}


// Задача 1. 
 
// Пользователь вводит с клавиатуры число n, далее -- n целых чисел, которые нужно записать в вектор.
// Потом пользователь вводит ещё одно значение. Нужно удалить из вектора все элементы, которые равны 
// данному значению, и вывести итоговое состояние вектора

// Пример:
// Пользователь ввёл 5, потом числа 1, 3, 3, 5, 1. И потом -- число 3. Необходимо, чтобы в векторе остались 
// числа 1, 5, 1, которые надо вывести их на экран. 
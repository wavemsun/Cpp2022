#include <iostream>
#include <vector>

std::vector<int> deletElement(std::vector<int> vec, int k) 
{
    for(int i = 0; i < vec.size(); ++i) 
    {
        if (vec[i] == k) 
        { 
            vec.erase(vec.begin() + i);
            --i;
        }
    }
    return vec;
}

int main() 
{
    int n, k;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Enter elements: " << std::endl;
    for(int i = 0; i < vec.size(); ++i) 
    {
        std::cin >> vec[i];
    }
    std::cout << "Enter deleting element: ";
    std::cin >> k;
    vec = deletElement(vec, k); 
    for(int i = 0; i < vec.size(); ++i) 
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
    return  0;
}




// В базу данных, являющуюся вектором, с клавиатуры приходят целочисленные значения, 
// и помещаются в конец. Однако, эта база может хранить только 20 элементов, а дальше 
// необходимо будет удалять элементы, которые лежат в базе дольше всех. 
// 
// При вводе -1 с клавиатуры необходимо вывести всё содержимое базы данных 
// (то есть 20 или менее элементов). При выводе элементы должны быть в том порядке, 
// в котором они добавлялись в базу данных.
// 
// Попробуйте написать максимально оптимизированное решение данной задачи, чтобы совершалось 
// как можно меньше расширений и перемещений элементов внутри вектора.
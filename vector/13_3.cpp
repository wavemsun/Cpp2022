#include <iostream>
#include <vector>

/*std::vector<int> addElement(std::vector<int> vec, int k, int vec_size) {
    if (vec.size() < 5) {
        vec.push_back(k);
    } else {   
         
        vec.push_back(k);
        vec.erase(vec.begin());
    }
    return vec;
}*/
void printElement(std::vector<int> vec, int k) {
    for (int i = k; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	for (int i = 0; i < k; ++i)
		std::cout << vec[i] << " ";		
    std::cout << std::endl;
}

int main() {
    const int vec_size = 20;
    int n, it = 0;
    std::vector<int> vec;
    do {
        std::cout << "Enter elements: " << std::endl;
        std::cin >> n;
        if (n != -1) {
            if (vec.size() != vec_size) 
                vec.push_back(n);
            else 
                (vec[(it++) % vec_size] = n);
        } else {
            printElement(vec, ((it++) % vec_size));
        }
    } while (n != -1);
    std::cout << std::endl;
    return 0;
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
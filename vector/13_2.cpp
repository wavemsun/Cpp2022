#include <iostream>
#include <vector>

std::vector<float> enterElement(std::vector<float> vec) {
    for(int i = 0; i < vec.size(); ++i) {
        std::cin >> vec[i];
    }
    return vec;
}

void printElement(std::vector<float> vec) {
    for(int i = 0; i < vec.size(); ++i) {
        std::cout << "  " << vec[i];
    }
    std::cout << std::endl;
}

float summPrise(std::vector<float> vecPrice, std::vector<float> vecBuy) {
    float summ = 0.0;
    for(int i = 0; i < vecBuy.size(); ++i) {
        summ += vecPrice[vecBuy[i]];
    } 
    return summ;
}

int main() {
    int n, p;
    std::cout << "Enter the number of Prices: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the number of buy: " << std::endl;
    std::cin >> p;
    std::vector<float> vecPrice(n);
    std::vector<float> vecBuy(p);
    std::cout << "Enter vector price: " << std::endl;
    vecPrice = enterElement(vecPrice);
    std::cout << "---------------------" << std::endl;
    std::cout << "Enter vector Buy: " << std::endl;
    vecBuy = enterElement(vecBuy);  
    std::cout << "---------------------" << std::endl;
    printElement(vecPrice);
    printElement(vecBuy);
    std::cout << "---Result----" << std::endl;
    std::cout << "Summ: " << summPrise(vecPrice, vecBuy) << std::endl;
    
    return  0;
}

// С помощью списка инициализации задаётся вектор цен на продукты (дробными числами). Так же, 
// с помощью списка инициализации, задаётся вектор покупок (в виде индексов), которые 
// совершает человек.Необходимо вывести на экран итоговую стоимость покупок
// 
// Пример:
// 
// Вектор цен выглядит так:  {2.5, 4.25, 3.0, 10.0}
// 
// Вектор покупок: {1, 1, 0, 3}, то есть два товара по индексу 1, и по одному — индексов 0 и 3.
// 
// Суммарная стоимость будет равна 21.0
#include <iostream>
#include <vector>

std::vector<int> deletElement(std::vector<int> vec, int k) 
{
    for(int i = 0; i < vec.size(); ++i) 
    {
        if (vec[i] == k)
            vec.erase(vec.begin() + 1);
    }
    return vec;
}

int main() {
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
    std::vector<int> vecResult = deletElement(vec, k); 
    for(int i = 0; i < vecResult.size(); ++i) 
    {
        std::cout << vecResult[i] << "  ";
    }
    std::cout << std::endl;
    
    return  0;
}
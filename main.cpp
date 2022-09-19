#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa'  // ' helytt " hasznalata + << std::endl;
    for (int i = 0;)  // nem fejezi be a for ciklust, 0-rol indul 1 helyett
    {
        b[i] = i * 2;  //b[i-1] = i * 2;
    }
    for (int i = 0; i; i++)  // hianyzik meddig tart a for ciklus
    {
        std::cout << "Ertek:"  // nem iratja ki az erteket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // nem nullazza ki az atlagot
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

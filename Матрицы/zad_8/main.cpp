#include <iostream>                                //8. Дана матрица. Элементы первой строки — мощность электромотора, второй строки
#include <array>                                   //— категория мотора (число от 1 до 3). Найти самый мощный мотор категории 3.

int main()
{
    const int nrows = 2, ncols = 5;
    int power = 0;
    std::array<std::array<int, ncols>, nrows> motors = { { { 120, 100, 60, 240, 210 }, { 1, 3, 1, 2, 3 } } };
    for (int i = 0; i < ncols; i++) {
        if (motors[1][i] == 3 && motors[0][i] > power) {
            power = motors[0][i];
        }
    }
    std::cout << "The most powerful motor in category 3 has power " << power << std::endl;
    return 0;
}

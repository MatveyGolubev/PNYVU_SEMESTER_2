#include <iostream>                                              //9. Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
#include <array>                                                 //на экран матрицу, описывающую следующие сущности.
                                                                 //b. Состояние робота на шахматной доске. Робот характеризуется уровнем
int main(){                                                      //заряда, скоростью движения.
    const int nrows = 2, ncols = 2;
    int zaryad=0,speed=0;
    std::array<std::array<int, ncols>, nrows> robot;

    for(int i=0; i<nrows; i++) {
        for(int j=0; j<ncols; j++) {
            std::cout << "zaryad [" << i << "][" << j << "]: ";
            std::cin >> zaryad;
            std::cout << "speed [" << i << "][" << j << "]: ";
            std::cin >> speed;
        }
    }
    for(int i=0; i<nrows; i++) {
        for(int j=0; j<ncols; j++) {
            std::cout << robot[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

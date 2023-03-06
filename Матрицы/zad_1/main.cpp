#include <iostream>                                      //Преобразовать матрицу: элементы строки, в которой находится минимальный
#include <array>                                         //элемент матрицы, заменить нулями.
#include <ctime>

int main() {
    const int ncols = 3, nrows = 3;
    int min = INT_MAX, minrows = 0, mincols = 0;
    std::array<std::array<int, ncols>, nrows> mas;
    srand(time(0));
    for(int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncols; j++) {
            mas[i][j] = rand() % 100;
            std::cout << mas[i][j] << " ";
            if (mas[i][j] < min) {
                min = mas[i][j];
                minrows = i;
                mincols = j;
            }
        }
        std::cout << std::endl;
    }
    for(int i = 0; i < ncols; i++) {
        mas[minrows][i] = 0;
    }
    for(int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncols; j++) {
            std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

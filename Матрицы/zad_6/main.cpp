#include <iostream>                                       //6. Дана матрица. Составить массив, каждый элемент которого равен максимальному
#include <array>                                          //элементу соответствующей строки матрица.
#include <ctime>

int main() {
    const int ncols = 3, nrows = 3;
    int minrows = 0, mincols = 0;
    std::array<std::array<int, ncols>, nrows> matrix;
    srand(time(0));
    for(int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncols; j++) {
            matrix[i][j] = rand() % 100;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    int maxValues[nrows];
    for (int i = 0; i < nrows; i++) {
        int rowMax = matrix[i][0];
        for (int j = 1; j < ncols; j++) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
            }
        }
        maxValues[i] = rowMax;
    }
    for (int i = 0; i < nrows; i++) {
        std::cout << maxValues[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

#include <iostream>                                                     //3. Объявить динамический массив. Размер массива задаёт пользователь. Заполнить
                                                                        //массив случайными числами. Вывести на экран адреса и значения элементов
int main() {                                                            //массива.
    int size;
    std::cout << "Size: ";
    std::cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    }
    for (int i = 0; i < size; i++) {
        std::cout<<&arr[i]<<i << " "  << " " << arr[i] << std::endl;
    }
    return 0;
}

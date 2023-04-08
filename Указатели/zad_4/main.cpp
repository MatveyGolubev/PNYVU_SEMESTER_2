#include <iostream>                                                   //4. Объявить сущность и описать её свойства. Объявить динамический массив сущностей.

struct Plane {
    std::string model;
    int year, places;
    float Speed;
};
int main() {
    int num=4;
    Plane* planes = new Plane[num];
    for (int i = 0; i < num; i++) {
        std::cout<<"Planes № "<<i + 1<<std::endl;
        std::cout<<"Model:";
        std::cin>>planes[i].model;
        std::cout<<"Year:";
        std::cin>>planes[i].year;
        std::cout << "Places: ";
        std::cin>>planes[i].places;
        std::cout<<"Max Speed: ";
        std::cin>>planes[i].Speed;
        std::cout<<std::endl;
    }
    for (int i = 0; i < num; i++) {
        std::cout << "Plane " << i + 1 << ":" << std::endl;
        std::cout << "Model: " << planes[i].model <<std::endl;
        std::cout << "Year: " << planes[i].year <<std::endl;
        std::cout << "Places: " << planes[i].places << " пассажиров" << std::endl;
        std::cout << "Max Speed: "<<planes[i].Speed<<std::endl;
    }
    delete[] planes;
    return 0;
}

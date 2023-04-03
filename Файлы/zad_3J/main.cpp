#include <fstream>                                             //Протабулировать функцию. Начальную и финальную точки, шаг, параметр Ч
#include <cmath>                                               //считывать из файла in.txt. Результат записывать в текстовый файл out.txt. Формат
                                                               //записи данных:x0, y(x0) x1, y(x1) x2, y(x2) и т.д.
int main(){
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");

    double x0, xf, dt, C;
    in >> x0 >> xf >> dt >> C;
    in.close();

    double x = x0;
    double y;

    while (x <= xf){
        y = x;
        double st = 2, zn=x;
        while (st <= C + 1){
            zn =x*x;
            y += zn / st;
            st+=1;
        }
        out << x << ", " << y << std::endl;
        x += dt;
    }
    out.close();
    return 0;
}

#include <iostream>
#include <fstream>

struct Student {
    std::string surname;
    double averagerating;
    int course;
};

int main()
{
    Student students[100];
    int kstud;
    std::cout << "kol-vo studentov:";
    std::cin >> kstud;

    for (int i = 0; i < kstud; i++) {
        std::cout << "Student №" << i+1 << std::endl;
        std::cout << "familiya: ";
        std::cin >> students[i].surname;
        std::cout << "sredniy bal: ";
        std::cin >> students[i].averagerating;
        std::cout << "Kurs: ";
        std::cin >> students[i].course;
    }

    std::ofstream out("students.txt");
    for (int i = 0; i < kstud; i++) {
        out << "familiya: " << students[i].surname << std::endl;
        out << "sredniy bal: " << students[i].averagerating << std::endl;
        out << "Kurs: " << students[i].course << std::endl;
    }
    out.close();
    return 0;
}

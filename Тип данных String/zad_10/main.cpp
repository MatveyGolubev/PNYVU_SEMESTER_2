#include <iostream>                                         //10.Удалить из строки первые буквы слов.
#include <string>

int main()
{
    std::string text=("Hello World human");
    std::string str;
    size_t pos;
    text.erase(0, 1);
    while ((pos = text.find(" ")) != std::string::npos){
        text.erase(pos, 2);
                                                     }
    str=text;
    std::cout << str << std::endl;
    return 0;
}

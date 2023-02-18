#include <iostream>                                   //1.Составить алгоритм, находящий, сколько раз в тексте сочетание “ум” встречается не в начале слова.
#include <string>

int main()
{
    std::string str=("umnica umka umet sumka");
    int i = -1;
    int in = 0;

    while (str.find('um', in) != -1) {
        in = str.find('um', in + 1);
        i++;
                                     }
std::cout << i << std::endl;

return 0;

}

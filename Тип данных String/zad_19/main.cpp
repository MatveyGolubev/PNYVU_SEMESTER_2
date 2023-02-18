#include <iostream>                                    //19.В данной строке вставить после каждого символа 'a' символ 'b'.
#include <regex>
#include <string>

int main() {
    std::string text = "asdgfvhewika aiudhjfk a aajkdhf akjaaa";
    std::cout << text << std::endl;
    text = regex_replace(text, std::regex("a"), "ab");
    std::cout << text << std::endl;
    return 0;
}


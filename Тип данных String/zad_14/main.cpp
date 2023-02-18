#include <iostream>                                 //14.Дана строка. Если она начинается на 'abc', то заменить их на 'www', иначе добавить в конец строки 'zzz'.
#include <string>

int main(){
    std::string str=("acdbcefg");
    std::string x="abc", w="www",z="zzz";
    size_t pos;
    if ((pos=str.find(x)) != std::string::npos){
        str.replace(pos,3,w);
                                               }
    else{
        str.append(z);
        }
    std::cout<<str<<std::endl;
    return 0;
}

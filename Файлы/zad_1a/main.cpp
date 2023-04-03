#include <iostream>                                                //1. Реализовать чтение заголовков файлов форматов. Проверить работоспособность
#include <fstream>                                                 //можно по примерам.
                                                                   //a. ICO: ICONDIR и ICONDIRENTRY
int main()
{
    std::ifstream f("books.ico",std::ios::binary);
    if(!f.is_open()){
        std::cout<<"Error";
        return -1;
    }
    char ICONDIR[6],ICONDIRENTRY[16];
    f.read((char*) ICONDIR,sizeof(char));
    std::cout<<ICONDIR;
    f.read((char*) ICONDIRENTRY,sizeof(char));
    std::cout<<ICONDIRENTRY;

    return 0;
}

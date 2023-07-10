// Leaver_Client.cpp

#include <iostream>
#include <windows.h>
#include <string>
#include "Leaver_Dynamic.h"

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Leaver::Leaver Leaver;
    std::string name;

    std::cout << "¬ведите им€:";
    std::cin >> name;
    Leaver.set_inc(name);
    std::cout << Leaver.leave();

}
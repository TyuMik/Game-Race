#include "Supplementary.h"
#include <iostream>

void warning_command() {
    std::cout << "ƒолжно быть зарегистрировано хот€ бы два транспортных средства." << std::endl;
    std::cout << "1. «арегистрировать транспорт" << std::endl;
    std::cout << "¬ыберите действие: ";
}

void screen() {
    Sleep(15);
    std::system("cls");
}
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "Counter.h" 
#include "Race_Results.h"
#include "Supplementary.h"
#include "Race.h"
#include "Land_Race.h"
#include "Camel.h"
#include "FastCamel.h"
#include "Centaur.h"
#include "RapidSnickers.h"
#include "Air_Race.h"
#include "Eagle.h"
#include "Broom.h"
#include "Carpet.h"

#pragma warning (disable : 4251 )

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
    std::cout << std::endl;

    int race_type, Distance;
    int command_to_register;
    int command_to_selectTransport_1 = 10;
    int command_to_selectTransport_2 = 10;
    int command_to_restart = 10;
    int size = 0;
    int cntr;
    const int SIZE = 7;
    const int precision = 2;

    do {
        do {
            std::cout << "1. Гонка для наземного транспорта" << std::endl;
            std::cout << "2. Гонка для воздушного транспорта" << std::endl;
            std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
            std::cout << std::endl;
            std::cout << "Выберите тип гонки: ";
            std::cin >> race_type;
            screen();
        } while ((race_type != 1) && (race_type != 2) && (race_type != 3));

        do {
            std::cout << "Укажите длину дистанции (должна быть положительна): ";
            std::cin >> Distance;
            screen();
        } while (Distance <= 0);

        do {
            warning_command();
            std::cin >> command_to_register;
            screen();
        } while (command_to_register != 1);

        Camel T1(Distance);
        FastCamel T2(Distance);
        Centaur T3(Distance);
        RapidSnickers T4(Distance);
        Eagle T5(Distance);
        Broom T6(Distance);
        Carpet T7(Distance);

        Counter c1, c2, c3, c4, c5, c6, c7;

        Race_Results* RR = new Race_Results[SIZE];
        
        do {
            switch (race_type) {
                case 1:
                    std::cout << "Гонка для наземного транспорта." << std::endl;
                    break;
                case 2:
                    std::cout << "Гонка для воздушного транспорта." << std::endl;
                    break;
                case 3:
                    std::cout << "Гонка для наземного и воздушного транспорта." << std::endl;
                    break;
                }
            std::cout << "Расстояние: " << Distance << std::endl;
            size = c1.getCounter() + c2.getCounter() + c3.getCounter() + c4.getCounter() + c5.getCounter() + c6.getCounter() + c7.getCounter();

            if (size > 0) {
                std::cout << "Зарегистрированные транспортные средства: ";
                std::cout << RR[0].get_race_name();
                for (int i = 1; i < size; i++) {
                    std::cout << ", " << RR[i].get_race_name();
                };
                std::cout << std::endl;
            }
            std::cout << std::endl;
                
            std::cout << "1. Верблюд" << std::endl;
            std::cout << "2. Верблюд-быстроход" << std::endl;
            std::cout << "3. Кентавр" << std::endl;
            std::cout << "4. Ботинки-вездеходы" << std::endl;
            std::cout << "5. Орёл" << std::endl;
            std::cout << "6. Метла" << std::endl;
            std::cout << "7. Ковёр-самолёт" << std::endl;
            std::cout << "0. Закончить регистрацию" << std::endl;
            std::cout << std::endl;
            std::cout << "Выберите транспорт или '0' для окончания процесса регистрации: ";

            std::cin >> command_to_selectTransport_1;
            screen();
            
            try {
                switch (command_to_selectTransport_1) { 
                case 1: 
                    if (race_type == 2) {
                        throw 'E';
                    } else
                    if (c1.getCounter() > 0) {
                    std::cout << T1.get_name() << " ";
                    throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T1.get_name());
                        RR[size].set_race_result(T1.RaceResult());
                        c1.increment();
                        std::cout << T1.get_name() << " ";
                        throw 3;
                    }
                case 2:
                    if (race_type == 2) {
                        throw 'E';
                    }
                    if (c2.getCounter() > 0) {
                        std::cout << T2.get_name() << " ";
                        throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T2.get_name());
                        RR[size].set_race_result(T2.RaceResult());
                        c2.increment();
                        std::cout << T2.get_name() << " ";
                        throw 3;
                    }
                case 3:
                    if (race_type == 2) {
                        throw 'E';
                    }
                    if (c3.getCounter() > 0) {
                        std::cout << T3.get_name() << " ";
                        throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T3.get_name());
                        RR[size].set_race_result(T3.RaceResult());
                        c3.increment();
                        std::cout << T3.get_name() << " ";
                        throw 3;
                    }
                case 4:
                    if (race_type == 2) {
                        throw 'E';
                    }
                    if (c4.getCounter() > 0) {
                        std::cout << T4.get_name() << " ";
                        throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T4.get_name());
                        RR[size].set_race_result(T4.RaceResult());
                        c4.increment();
                        std::cout << T4.get_name() << " ";
                        throw 3;
                    }
                case 5:
                    if (race_type == 1) {
                        throw 'E';
                    }
                    if (c5.getCounter() > 0) {
                        std::cout << T5.get_name() << " ";
                        throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T5.get_name());
                        RR[size].set_race_result(T5.RaceResult());
                        c5.increment();
                        std::cout << T5.get_name() << " ";
                        throw 3;
                    }
                case 6:
                    if (race_type == 1) {
                        throw 'E';
                    }
                    if (c6.getCounter() > 0) {
                        std::cout << T6.get_name() << " ";
                        throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T6.get_name());
                        RR[size].set_race_result(T6.RaceResult());
                        c6.increment();
                        std::cout << T6.get_name() << " ";
                        throw 3;
                    }
                case 7:
                    if (race_type == 1) {
                        throw 'E';
                    }
                    if (c7.getCounter() > 0) {
                        std::cout << T7.get_name() << " ";
                        throw std::string("error!");
                    }
                    else {
                        RR[size].set_race_name(T7.get_name());
                        RR[size].set_race_result(T7.RaceResult());
                        c7.increment();
                        std::cout << T7.get_name() << " ";
                        throw 3;
                    }
                case 0:
                    break;
                default:
                    break;
                }
            }
            catch (int) {
                std::cout << "успешно зарегистрирован!" << std::endl;
                std::cout << std::endl;
                continue;
            }
            catch (std::string) {
                std::cout << "уже зарегистрирован!" << std::endl;
                std::cout << std::endl;
                continue;
            }
            catch (char) {
                std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << std::endl;
                std::cout << std::endl;
                continue;
            }

            if ((command_to_selectTransport_1 == 0) && (size < 2)) {
                do {
                    warning_command();
                    std::cin >> command_to_register;
                    screen();
                } while (command_to_register != 1);
            }

            if ((command_to_selectTransport_1 == 0) && (size >= 2)) {
                do {
                    std::cout << "1. Зарегистрировать транспорт" << std::endl;
                    std::cout << "2. Начать гонку" << std::endl;
                    std::cout << "Выберите действие: ";
                    std::cin >> command_to_selectTransport_2;
                    screen();
                } while ((command_to_selectTransport_2 != 1) && (command_to_selectTransport_2 != 2));
            }

        } while ((command_to_selectTransport_1 != 0) || (size < 2) || (command_to_selectTransport_2 != 2));
        
        RR->sort(RR, SIZE);
        std::cout << "Результаты гонки: " << std::endl;
        cntr = 1;
        for (int i = 0; i < SIZE; i++) {
            if ((RR[i].get_race_name()).length() > 0) {
                std::cout << cntr << ". " << RR[i].get_race_name() << ". Время: ";
                std::cout << std::fixed << std::setprecision(precision) << RR[i].get_race_result() << std::endl;
                cntr += 1;
            }
        } 
        std::cout << std::endl;
         
        delete[] RR; 

        do {
            std::cout << "1. Провести ещё одну гонку" << std::endl;
            std::cout << "2. Выйти" << std::endl;
            std::cout << "Выберите действие: ";
            std::cin >> command_to_restart;
            screen();
        } while ((command_to_restart != 1) && (command_to_restart != 2));

    } while (command_to_restart != 2);

    std::cout << "До свидания!" << std::endl;

    return 0;
}
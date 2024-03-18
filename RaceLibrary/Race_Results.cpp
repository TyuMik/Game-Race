#include "Race_Results.h"

Race_Results::Race_Results() : race_name(""), race_result(0) { }

void Race_Results::set_race_name(std::string race_name) {
    this->race_name = race_name;
}

void Race_Results::set_race_result(double race_result) {
    this->race_result = race_result;
}

std::string Race_Results::get_race_name() {
    return race_name;
}

double Race_Results::get_race_result() {
    return race_result;
}

void Race_Results::sort(Race_Results* result, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (result[j].get_race_result() > result[j + 1].get_race_result()) {
                std::string tmp_name = result[j].get_race_name();
                double tmp_result = result[j].get_race_result();
                result[j].set_race_name(result[j + 1].get_race_name());
                result[j].set_race_result(result[j + 1].get_race_result());
                result[j + 1].set_race_name(tmp_name);
                result[j + 1].set_race_result(tmp_result);
            }
        }
    }
}
//
// Created by JimCy on 2019-01-14.
//

#include "../Alg.h/insertion-sort.h"

insertion_sort::insertion_sort() {
    std::cout << this->getInsertionSort("92341786") << std::endl;
}

std::string insertion_sort::getInsertionSort(std::string str) {
    for (int j = 0; j < str.length(); j++) {
        char key = str[j];
        int i = j - 1;
        while (i > -1 && str[i] > key) {
            str[i + 1] = str[i];
            i = i - 1;
        }
        str[i + 1] = key;
    }
    return str;
}

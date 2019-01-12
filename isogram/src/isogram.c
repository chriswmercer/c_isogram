//
// Created by cmercer on 08/01/2019.
//
#include "isogram.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

bool is_isogram(const char phrase[]) {
    if (!phrase) {
        return false;
    }
    if (strlen(phrase) == 0) {
        return true;
    }

    unsigned int i = 0;
    uint32_t letter_mask = 0;

    while (phrase[i] != '\0') {
        char newChar = phrase[i];
        if (isalpha(newChar)) {
            unsigned int x = 1 << (tolower(newChar) - 'a');
            if (letter_mask & x) return false;
            letter_mask |= x;
        }
        i++;
    }
    return true;
}

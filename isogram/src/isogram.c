//
// Created by cmercer on 08/01/2019.
//
#include"isogram.h"
#include<string.h>
#include<ctype.h>
#include<stdio.h>

bool is_isogram(const char phrase[]) {
    if(!phrase) {
        return false;
    }
    if(strlen(phrase) == 0) {
        return true;
    }

    unsigned int i = 0, count[26] = {0}, x;

    while (phrase[i] != '\0') {
        char newChar = tolower(phrase[i]);
        if (newChar >= 'a' && newChar <= 'z') {
            x = newChar - 'a';
            if (++count[x] > 1) return false;
        }
        i++;
    }
    return true;
}

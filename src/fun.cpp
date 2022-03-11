// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
int i = 0;
int count = 0;
bool numb = false;
bool inWord = false;
while (str[i]) {
        if (str[i] != ' ') {
            inWord = true;
            if (inWord == true && numb == false && isdigit(str[i]))
               numb = true;
        } else if (str[i] == ' ' && inWord == true && numb == false) {
        count++;
        inWord = false;
        numb = false;
        } else if (str[i] == ' ' && inWord == true && numb == true) {
        inWord = false;
        numb = false;
        }
    i++;
}
    return count;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}

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
    int i = 0;
    int count = 0;
    bool inWord = false;
    bool Zaglav_char = false;
    bool eng_lowercase_char = false;
    while (str[i]) {
        if (str[i] != ' ') {
            inWord = true;
            if (inWord == true && Zaglav_char == false && eng_lowercase_char == false && str[i] >= 'A' && str[i] <= 'Z')
               Zaglav_char = true;
            if (inWord == true && Zaglav_char == true && str[i] >= 'a' && str[i] <= 'z')
               eng_lowercase_char = true;
        } else if (str[i] == ' ' && inWord == true && Zaglav_char == true && eng_lowercase_char == true) {
        count++;
        inWord = false;
        Zaglav_char = false;
        eng_lowercase_char = false;
        } else if (str[i] == ' ' && inWord == true) {
        inWord = false;
        Zaglav_char = false;
        eng_lowercase_char = false;
        }
   i++;
 }
   return count;
}

unsigned int faStr3(const char *str) {
    return 0;
}

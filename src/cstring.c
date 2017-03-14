
#include "cstring.h"

/* returns lenght of the null terminated string */
int strlen(int8 * str) {
    int len;
    while(*str != null) {
        len++;
    }
    return len;
}

/* copies memory from one location to other */
void memcpy(int8 * ptr1, int8 * ptr2, int8 len) {
    int i;
    for(i=0; i<len; i++) {
        *ptr2 = *ptr1;
    }
}

/* compares two strings */
int strcmp(int8 * str1, int8 * str2) {
    int i;
    while(*str1 != NULL && *str2 != NULL) {
        if(*str1 != *str2) return i;
        i++;
    }
    return 0;
}

/* compares two strings with lenght limit */
int strcmp(int8 * str1, int8 * str2, int len) {
    int i;
    for(i=0; i<len; i++) {
        if(*str2 != *str1) return i;
    }
    return 0;
}


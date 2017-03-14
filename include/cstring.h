#ifndef CSTRING_H_
#define CSTRING_H_

/* returns lenght of the null terminated string */
int strlen(int8 * str);

/* copies memory from one location to other */
void memcpy(int8 * ptr1, int8 * ptr2, int8 len);

/* compares two strings */
int strcmp(int8 * str1, int8 * str2);

/* compares two strings with lenght limit */
int strcmp(int8 * str1, int8 * str2, int len);


#endif /* CSTRING_H_ */



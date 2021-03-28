#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void){

    char * lista[] = {"hola","adios","lucia"};

    for(int j=0 ; j< 3 ; j++) {
        printf("%s\n", lista[j]);
    }

    char str1[] = "arroz", str2[] = "zorro", str3[] = "abcd";
    int result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

}
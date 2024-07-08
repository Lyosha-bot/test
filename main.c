#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 50

typedef enum
{
    number,
    age
} FIELD_NAME;

typedef struct
{
    int number;
    int age;
} DATA;

int main()
{
    DATA a = {123,34};
    DATA b = {123,65};

    FIELD_NAME name = age;

    printf("COMPARE: %d", a->'age');
    return 0;
}

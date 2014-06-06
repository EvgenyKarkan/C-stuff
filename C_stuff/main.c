#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>



void printSizeOfTypes();


int main(int argc, char *argv[])
{
    printSizeOfTypes();

    return 0;
}

void printSizeOfTypes()
{
    int _array[]     = {10, 12, 13, 14, 20, 42};
    char name[]      = "Chuck";
    char full_name[] = {'C', 'h', 'u', 'c', 'k', '.', 'N', 'o', 'r', 'i', 's', '\0'};
    struct Foo {
        int foo;
        char bar;
        double buzz;
    };
    struct Foo theFoo = {3, 'B', 3.1415};

    printf("The size of an int: %u bytes \n", sizeof(int));
    printf("The size of an unsigned int: %u bytes \n", sizeof(unsigned int));

    printf("The size of an long int: %u bytes \n", sizeof(long int));
    printf("The size of an long long int: %u bytes \n", sizeof(long long int));
    printf("The size of an array of short int: %u bytes \n", sizeof(short int));
    printf("The size of an unsigned long int: %u bytes \n", sizeof(unsigned long int));

    printf("The size of an uint8_t: %u bytes \n", sizeof(uint8_t));
    printf("The size of an uint16_t: %u bytes \n", sizeof(uint16_t));
    printf("The size of an uint32_t: %u bytes \n", sizeof(uint32_t));
    printf("The size of an uint64_t: %u bytes \n", sizeof(uint64_t));

    printf("The size of an int8_t: %u bytes \n", sizeof(int8_t));
    printf("The size of an int16_t: %u bytes \n", sizeof(int16_t));
    printf("The size of an int32_t: %u bytes \n", sizeof(int32_t));
    printf("The size of an int64_t: %u bytes \n", sizeof(int64_t));

    printf("The size of an int_least8_t: %u bytes \n", sizeof(int_least8_t));
    printf("The size of an int_least16_t: %u bytes \n", sizeof(int_least16_t));
    printf("The size of an int_least32_t: %u bytes \n", sizeof(int_least32_t));
    printf("The size of an int_least64_t: %u bytes \n", sizeof(int_least64_t));

    printf("The size of an int_fast8_t: %u bytes \n", sizeof(int_fast8_t));
    printf("The size of an int_fast16_t: %u bytes \n", sizeof(int_fast16_t));
    printf("The size of an int_fast32_t: %u bytes \n", sizeof(int_fast32_t));
    printf("The size of an int_fast64_t: %u bytes \n", sizeof(int_fast64_t));

    printf("The size of an intptr_t: %u bytes \n", sizeof(intptr_t));
    printf("The size of an uintptr_t: %u bytes \n", sizeof(uintptr_t));

    printf("The size of an float: %u bytes \n", sizeof(float));
    printf("The size of an double: %u bytes \n", sizeof(double));
    printf("The size of an long double: %u bytes \n", sizeof(long double));
    printf("The size of an BOOL: %u bytes \n", sizeof(_Bool));

    printf("The size of an array of ints: %u bytes \n", sizeof(_array));
    printf("The size of an array from string: %u bytes \n", sizeof(name));
    printf("The size of an array of chars: %u bytes \n", sizeof(full_name));

    printf("The size of an struct: %u bytes \n", sizeof(theFoo));

}


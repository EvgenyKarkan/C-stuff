#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <stddef.h>
#include <complex.h>
#include <float.h>
#include <limits.h>
#include <string.h>

#include "Debug_macros.h"
#include "Pointers.h"

void printSizeOfTypes();
void printLimits();


int main(int argc, char *argv[])
{
    printSizeOfTypes();
    printLimits();
    pointersFunction();
    printPointersToFunction();

    return 0;
}

 void printSizeOfTypes()
{
    debug();

    int _array[]     = {10, 12, 13, 14, 20, 42};
    char name[]      = "Chuck";
    char full_name[] = {'C', 'h', 'u', 'c', 'k', '.', 'N', 'o', 'r', 'i', 's', '\0'};

    struct Foo {
        int foo;
        char bar;
        double buzz;
    };
    struct Foo theFoo = {3, 'B', 3.1415};

    enum dummyEnum {
       dummyEnumOne,
       dummyEnumTwo = 2,
       dummyEnumThree = 3,
       dummyEnumFour = 4
    };

    enum dummyEnum Jazz = 4;

    printf("The size of an enum %u bytes \n", sizeof(Jazz));

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
    printf("The size of an intmax_t: %u bytes \n", sizeof(intmax_t));
    printf("The size of an uintmax_t: %u bytes \n", sizeof(uintmax_t));

    printf("The size of an float: %u bytes \n", sizeof(float));
    printf("The size of an double: %u bytes \n", sizeof(double));
    printf("The size of an long double: %u bytes \n", sizeof(long double));
    printf("The size of an BOOL: %u bytes \n", sizeof(_Bool));

    printf("The size of an NULL: %u bytes \n", sizeof(NULL));

    printf("The size of an ptrdiff_t: %u bytes \n", sizeof(ptrdiff_t));

    printf("The size of an char: %u bytes \n", sizeof(char));
    printf("The size of an unsigned char: %u bytes \n", sizeof(unsigned char));
    printf("The size of an wchar_t: %u bytes \n", sizeof(wchar_t));

    printf("The size of an float _Complex: %u bytes \n", sizeof(float _Complex));
    printf("The size of an double _Complex: %u bytes \n", sizeof(double _Complex));

    printf("The size of an  size_t: %u bytes \n", sizeof(size_t));

    printf("The size of an void: %u bytes \n", sizeof(void));

    printf("The size of an array of ints: %u bytes \n", sizeof(_array));
    printf("The size of an array from string: %u bytes \n", sizeof(name));
    printf("The size of an array of chars: %u bytes \n", sizeof(full_name));

    printf("The size of an struct: %u bytes \n", sizeof(theFoo));
}

 void printLimits()
{
    debug();

    printf("Number of bits in char: %u\n", CHAR_BIT);
    printf("Max value of char: %d\n", CHAR_MAX);
    printf("Max value of signed char: %d\n", SCHAR_MAX);
    printf("Max value of unsigned char: %u\n", UCHAR_MAX);

    printf("Min value of char: %d\n", CHAR_MIN);
    printf("Min value of signed char: %d\n", SCHAR_MIN);

    printf("Max value of int: %d\n", INT_MAX);
    printf("Min value of int: %d\n", INT_MIN);
    printf("Max value of uint: %u\n", UINT_MAX);

    printf("Max value of short: %d\n", SHRT_MAX);
    printf("Min value of short: %d\n", SHRT_MIN);
    printf("Max value of unsigned short: %hu\n", USHRT_MAX);

    printf("Max value of long: %ld\n", LONG_MAX);
    printf("Min value of long: %ld\n", LONG_MIN);
    printf("Max value of unsigned long: %lu\n", ULONG_MAX);

    printf("Max value of long: %lld\n", LLONG_MAX);
    printf("Min value of long: %lld\n", LLONG_MIN);
    printf("Max value of unsigned long: %llu\n", ULLONG_MAX);

    printf("Max number of characters that constitute a multibyte character in any supported locale: %d\n", MB_LEN_MAX);

    printf("Number of digits in float: %d\n", FLT_DIG);
    printf("Min float value except in multiplication: %f\n", FLT_EPSILON);
    printf("Max value of float: %g\n", FLT_MAX);
    printf("Max value of float exp: %i\n", FLT_MAX_EXP);
    printf("Min value of float: %f\n", FLT_MIN);

    printf("Number of digits in double: %d\n", DBL_DIG);
    printf("Min double value except in multiplication: %g\n", DBL_EPSILON);
    printf("Max value of double: %g\n", DBL_MAX);
    printf("Max value of double exp: %i\n", DBL_MAX_EXP);
    printf("Min value of double: %g\n", DBL_MIN);

    printf("Number of digits in long double: %d\n", LDBL_DIG);
    printf("Min double value except in multiplication: %Lg\n", LDBL_EPSILON);
    printf("Max value of long double: %Lg\n", LDBL_MAX);
    printf("Max value of long double exp: %i\n", LDBL_MAX_EXP);
    printf("Min value of long double: %Lg\n", LDBL_MIN);
}

#include "Pointers.h"

void pointersFunction ()
{
    debug();

    int x[5];
    printf("%p\n", x);
    printf("%p\n", x+1);
    printf("%p\n", &x);
    printf("%p\n", &x+1);

    int foo = 0;
    int *foo_ptr = &foo;

    int bar = *foo_ptr;
    *foo_ptr = 42;
    printf("%d \n", bar);

    int array[] = { 45, 67, 89 };
    int *array_ptr = array;
    printf(" first element: %i\n", *(array_ptr++));
    printf(" second element: %i\n", *(array_ptr++));
    printf(" third element: %i\n", *array_ptr);

    printf("%i\n", array[0]);

    int *array_ptr1 = &array[1];
    printf("%i\n", array_ptr1[1]);

    int test = 42;
    int *pointer = &test;
    int **indirect = &pointer;

    printf("Test address %p\n", &test);
    printf("Pointer value %d\n", *pointer);
    printf("Pointer address %p\n", &pointer);
    printf("Indirect value %d\n", **indirect);
    printf("Indirect address %p\n", &indirect);
}

void printPointersToFunction()
{
    debug();

    int s1 = 42, s2 = 7;
    int (*pointerToFunction)(int, int);
    pointerToFunction = sumTwoNumbers;

    showResult(s1, s2, pointerToFunction);
}

void showResult(int x, int y, int (*sum)(int, int))
{
    debug();

    printf("Result is => %d", sum(x, y));
}

int sumTwoNumbers(int a, int b)
{
    debug();

    return a + b;
}

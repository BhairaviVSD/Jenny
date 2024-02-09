#include <stdio.h>

int main()
{
    int b = 10;

    // * -> dereference
    int *p;
    // & -> address
    p = &b;

    // Same output
    printf("%d\n", b);
    printf("%d\n", *p);

    // Same output
    printf("%p\n", p);
    printf("%p\n", &b);

    // Array is a pointer
    int a[] = {2, 4, 6, 8, 12, 16, 20};
    int *q;
    q = a;

    // Same output
    printf("%p\n", a);
    printf("%p\n", q);
    printf("%p\n", &a);

    // Same output
    printf("%p\n", &q);

    // Same output
    // base address + 2 -> 3rd integer -> base address + 2 * size of int
    printf("%d %d %d %d %d\n", a[2], *(a + 2), *(q + 2), *(2 + a), 2 [q]);

    //&a+1 -> &(entire array) + 1 -> base address + len(array) * size of datatype of array
    printf("%p %p %p %p\n", a, a + 1, &a[0] + 1, &a + 1);

    printf("%d %d %d", *a, *(a + 1), *a + 1);

    return 0;
}
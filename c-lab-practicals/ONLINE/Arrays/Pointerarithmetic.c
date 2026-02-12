#include <stdio.h>


// ?Pointer does NOT increase by 1 byte. It increases by the size of the data type it points to.

int main() {
    int a = 10;
    int *p = &a;

    printf("%p\n", p);
    p++;
    printf("%p\n", p);
}


// If p was 1000

// After p++ → 1004

// Why 4?

// Because:

// sizeof(int) = 4 bytes


// So:

// p + 1 = p + sizeof(int)


// NOT +1 byte.

// If it was char then it pointer address increases by 1
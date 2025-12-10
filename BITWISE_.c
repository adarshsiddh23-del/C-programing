#include <stdio.h>

int main() {
    int a = 12;  // 1100
    int b = 5;   // 0101

    printf("a = %d (1100)\n", a);
    printf("b = %d (0101)\n\n", b);

    printf("1. Bitwise AND (a & b):\n");
    printf("   1100");
    printf(" & 0101\n");
    printf(" = 0100 (4)\n\n");

    printf("Result = %d\n\n", a & b);

    printf("2. Bitwise OR (a | b):\n");
    printf("   1100");
    printf(" | 0101\n");
    printf(" = 1101 (13)\n\n");
    printf("Result = %d\n\n", a | b);

    printf("3. Bitwise XOR (a ^ b):\n");
    printf("   1100");
    printf(" ^ 0101\n");
    printf(" = 1001 (9)\n\n");
    printf("Result = %d\n\n", a ^ b);

    printf("4. Bitwise NOT (~a):\n");
    printf("~1100 = (2's complement) = -13\n");
    printf("Result = %d\n\n", ~a);

    printf("5. Left Shift (a << 1):\n");
    printf("1100 << 1 = 11000 (24)\n");
    printf("Result = %d\n\n", a << 1);

    printf("6. Right Shift (a >> 1):\n");
    printf("1100 >> 1 = 0110 (6)\n");
    printf("Result = %d\n\n", a >> 1);

    return 0;
}

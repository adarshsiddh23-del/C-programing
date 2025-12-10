#include<stdio.h>
#include<string.h>
int main()
{
    char S[20];
    printf("Enter your name");
    /* use fgets instead of gets to avoid buffer overflow */
    if (fgets(S, sizeof(S), stdin) != NULL) {
        /* remove trailing newline if present */
        size_t ln = strlen(S);
        if (ln > 0 && S[ln-1] == '\n') S[ln-1] = '\0';
    }
    puts(S);
    return 0;
}
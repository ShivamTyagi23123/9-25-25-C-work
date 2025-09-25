#include <stdio.h>

int main() 
{
    char s[100];
    int i = 0, words = 0;
    fgets(s, 100, stdin);
    while (s[i]) {
        if (s[i] != ' ' && s[i] != '\n' && (s[i + 1] == ' ' || s[i + 1] == '\n' || s[i + 1] == 0))
            words++;
        i++;
    }
    printf("%d", words);
    
    return 0;
}


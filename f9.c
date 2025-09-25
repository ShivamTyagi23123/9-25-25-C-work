#include <stdio.h>

void swap_case(char s[]) {
    int i = 0;
    while (s[i]) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        i++;
    }
    printf("%s", s);
}

int main() {
    char s[100];
    fgets(s, 100, stdin);
    swap_case(s);
    return 0;
}

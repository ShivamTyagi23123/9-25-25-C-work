#include <stdio.h>

void count_adsc() {
    char s[100]; int i = 0, a = 0, d = 0, sp = 0;
    fgets(s, 100, stdin);
    while (s[i]) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) a++;
        else if (s[i] >= '0' && s[i] <= '9') d++;
        else if (s[i] != ' ' && s[i] != '\n') sp++;
        i++;
    }
    printf("%d %d %d", a, d, sp);
}

int main() {
    count_adsc();
    return 0;
}

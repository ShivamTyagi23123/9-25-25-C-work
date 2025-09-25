#include <stdio.h>

void count_words() {
    char s[100]; int i = 0, c = 0;
    fgets(s, 100, stdin);
    while (s[i]) {
        if (s[i] != ' ' && s[i] != '\n' && (s[i+1] == ' ' || s[i+1] == '\n' || s[i+1] == 0))
            c++;
        i++;
    }
    printf("%d", c);
}

int main() {
    count_words();
    return 0;
}

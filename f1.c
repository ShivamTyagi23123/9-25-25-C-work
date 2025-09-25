#include <stdio.h>

void count_words() {
    char s[100]; int i, c=0;
    fgets(s,100,stdin);
    for(i=0;s[i];i++)
        if((s[i]!=' '&&s[i]!='\n')&&((s[i+1]==' '||s[i+1]=='\n'||s[i+1]==0)))
            c++;
    printf("%d",c);
}
int main() {
    count_words();
    return 0;
}

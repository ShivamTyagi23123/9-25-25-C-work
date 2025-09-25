#include <stdio.h>

void swap_case(char s[]) {
    int i;
    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
    printf("%s",s);
}

int main() {
    char s[100];
    fgets(s,100,stdin);
    swap_case(s);
    return 0;
}

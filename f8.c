#include <stdio.h>

void count_adsc() {
    char s[100]; int i,a=0,d=0,sp=0;
    fgets(s,100,stdin);
    for(i=0;s[i];i++)
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) a++;
        else if(s[i]>='0'&&s[i]<='9') d++;
        else if(s[i]!=' '&&s[i]!='\n') sp++;
    printf("%d %d %d",a,d,sp);
}

int main() {
    count_adsc();
    return 0;
}

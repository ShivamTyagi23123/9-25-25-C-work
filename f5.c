#include <stdio.h>

int main() 
{
    char s[100], lw[100]; int i=0, max=0, j=0, k;
    fgets(s,100,stdin);
    while(s[i]) {
        if(s[i]!=' '&&s[i]!='\n') lw[j++]=s[i];
        else {
            if(j>max) { max=j; lw[j]=0; }
            j=0;
        }
        i++;
    }
    lw[max]=0;
    printf("%s",lw);
    
    return 0;
}

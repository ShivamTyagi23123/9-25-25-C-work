#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100],w[100],lw[100]; int i=0,j=0,max=0,len;

    fgets(s,100,stdin);
    for(;s[i];i++) {
        if(s[i]!=' '&&s[i]!='\n') w[j++]=s[i];
        else {
            w[j]=0; len=strlen(w);
            if(len>max) { max=len; strcpy(lw,w);}
            j=0;
        }
    }
    printf("%s",lw);
    return 0;
}

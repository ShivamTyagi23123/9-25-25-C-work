 #include <stdio.h>
#include <string.h>

int main() 
{
    char s[100]; int i,n,f=1;

    fgets(s,100,stdin);
    n=strlen(s)-1;
    for(i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) f=0;
    
    printf(f?"Palindrome":"Not Palindrome");
    return 0;
}

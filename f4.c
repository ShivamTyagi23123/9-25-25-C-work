#include <stdio.h>

int main() 
{
    char s[100]; int i, n=0, f=1;
    fgets(s,100,stdin);
 
    while(s[n]!='\n'&&s[n]!=0) n++;
    for(i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) f=0;
    printf(f?"Palindrome":"Not Palindrome");
 
    return 0;
}

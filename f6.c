#include <stdio.h>

int main() 
{
    int a[3][3],i,j,sr,sc;

    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) {sr=0; for(j=0;j<3;j++) sr+=a[i][j]; printf("%d ",sr);}
    printf("\n");
    for(j=0;j<3;j++) {sc=0; for(i=0;i<3;i++) sc+=a[i][j]; printf("%d ",sc);}

    return 0;
}

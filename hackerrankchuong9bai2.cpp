#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
void latnguoc(char c[])
{
    int l=0,r= strlen(c)-1;
    //lap khi ma l<=r (dung while vì chưa bt trc lap bh)
    while(l<=r)
    {
        // doi vi tri 2 chu so
        char tmp= c[l];
        c[l]=c[r];
        c[r]=tmp;
        ++l,--r;
    }
}
void inthuong(char c[])
{
    for(int i=0;i<strlen(c);i++)
    {
        c[i]= tolower(c[i]);
    }
}
void inhoa(char c[])
{
    for(int i=0;i<=strlen(c);i++)
    {
        c[i]=toupper(c[i]);
    }
}
int main() {
    char c[10001];
    scanf("%s", c);
    latnguoc(c);
    printf("%s\n",c);
    inthuong(c);
    printf("%s\n",c);
    inhoa(c);
    printf("%s",c);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

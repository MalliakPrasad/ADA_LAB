#include<stdio.h>
#include<string.h>
int pat();
char str[50],pattern[25];
int n,m,i,j;
int main()
{
    int pos;
    printf("Enter the string:: ");
    scanf("%s",str);
    printf("Enter the pattern to be recognised:: ");
    scanf("%s",pattern);
    pos = pat();
    if(pos==-1)
        printf("Pattern not found!");
    else
        printf("The pattern found at :: %d\n",pos);
        return 0;
}
int pat()
{
    n = strlen(str);
    m = strlen(pattern);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && str[i+j]==pattern[j])
            j++;
        if(j==m)
            return i;
    }
    return -1;
    
}

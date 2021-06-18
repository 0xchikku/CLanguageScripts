//STRING DETECTION AND COUNT
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[30],substr[30];
    int i,j,n,k=0,count=0,len,pos[30],sublen,flag;

    printf("\nEnter the string:");
    gets(str);
    printf("\nEnter a substring:");
    gets(substr);
    len=strlen(str);
    sublen=strlen(substr);
    for(i=0;i<len-sublen+1;i++)
    {
        flag=1;
        for(j=1,n=0;n<sublen;j++,n++)
        {
            if(str[j]!=substr[n])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            pos[k]=i++;
            k++;
            count++;
        }
    }
    if(count>0)
    {
        printf("\nNumber of occurs in: %s %d",substr,count);
        for(k=0;k<count;k++)
        {
            printf("\n%s is pod[%d] time occurs in %d position",substr,count,k,pos[k]);
        }
    }
    else
    {
        printf("\nSubstring is not found");
        getch();
    }
}

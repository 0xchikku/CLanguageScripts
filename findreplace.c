//FIND AND REPLACE A STRING
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[80],s2[80],s3[80],e[80],r[80];
    int i,j,p,l1,l2,k=0,s=0,c=0;

    printf("\nEnter string1: ");
    gets(s1);
    printf("\nEnter the substring to search s2: ");
    gets(s2);
    printf("\nEnter the substring to be replaced s3: ");
    gets(s3);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        k=0;
        if(s1[i]==s2[0])
        {
            for(j=i;j<i+l2;j++)
            {
                e[k]=s1[j];
                k++;
            }
            e[k]='\0';
            if(strcmp(e,s2)==0)
            {
                for(p=0;s3[p]!='\0';p++)
                {
                    r[s++]=s3[p];
                    i=i+12-1;
                    c++;
                }                              
            }
            else
            {
                r[s++]=s1[i];
            }
        }
        else
        {
            r[s++]=s1[i];
        }
        
    }
    r[s++]='\0';
    if(c==0)
    {
        printf("\nSubstring is not found");
    }
    else
    {
        printf("\nReplaced string = %s\n",r);
    }
    getch();
}

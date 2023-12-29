#include<stdio.h>
void string_cat(char s1[],char s2[])
{
    int i=0,len=0,j=0;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }

    printf("String = %s",s1);
}
void string_ncpy(char s[], char s1[],int n)
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(i==n)
        {
            break;
        }
        s1[j]=s[i];
        i++;
        j++;
    }
    printf("%s",s1);
}
void string_cpy(char s[], char s1[])
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        s1[j]=s[i];
        i++;
        j++;
    }
    printf("%s",s1);
}
void length(char ch[])
{
    int len=0,i=0;
    while(ch[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d",len);
}

int main()
{
    char c[23];
    char h[32];
    int n;
    scanf("%s%d",&c,&n);
    string_ncpy(c,h,n);
    string_cpy(c,h);
    string_cat(c,h);
    length(c);
}

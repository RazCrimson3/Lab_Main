#include <stdio.h>
#include <string.h>


int main()
{
    char arr[1000];
    int i=0,len=0;
    printf("\nWorksheet 8: Program 8");
    printf("\nEnter a string within 999 characters  : ");
    scanf("%s",arr);
    len=strlen(arr);
    printf("\nVowels : ");
    for(i=0;i<len;i++)
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
            arr[i]='*';
    printf("\nConsonats : ");
    for(i=0;i<len;i++)
        if((!(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'))&&isalpha(arr[i]))
            arr[i]='#';
    return 0;
}
#include <stdio.h>
int main()
{
    int n,i,j,sum=0,cons=0,vowel=0,letter=0,digit=0,sc=0,space=0;
    char arr[70];
    fgets(arr,70,stdin);
    puts(arr);
    int len = 0;
while (arr[len] != '\0') {  
    len++;  
}

// If the last character before '\0' is '\n', remove it
if (arr[len - 1] == '\n') {  
    arr[len - 1] = '\0';  
}
    while(arr[i]!='\0')
    {
    if((arr[i]>=65 && arr[i]<=90)||(arr[i]>=97 && arr[i]<=122))
    {
        letter++;
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        vowel++;
        else
        cons++;
    }
    else if(arr[i]>=48 && arr[i]<=57)
    digit++;
    else if(arr[i]==' ')
    space++;
    else
    sc++;
    ++i;
    }
    printf("\nThe number of letters=%d",letter);
    printf("\nThe number of digits=%d",digit);
    printf("\nThe number of spaces=%d",space);
    printf("\nThe number of vowels=%d",vowel);
    printf("\nThe number of consonants=%d",cons);
    printf("\nThe number of special characters=%d",sc);
}



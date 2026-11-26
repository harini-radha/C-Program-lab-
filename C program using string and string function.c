#include<stido.h>
#inxlude<string.h>
int main()
{
char str1[50],str2[50],str3[100];
int res;
printf("Entre the first string:");
scanf("%s",str1);
printf("Entre the second string:");
scanf("%s",str2);
res=strlen(str1);
printf("\n lenght of first string=%d",res);
strcpy(str3,str1);
peintf("\nCopied string=%s",str3);
res=strcmp(str1,str2);
if(res=0)
printf("\nBoth strings are equal");
else
printf("\nBoth strings are not equal");
strcat(str1,str2);
printf("\nConcatenated string=%s",str1);
return 0;
}
output
Entre the first steing:Hello
Entre the second string: World
Lenght of first string=5
Copied string=Hello
Both string are not equal 
Concatenated string=Hello World

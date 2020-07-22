#include<stdio.h>
#include<ctype.h>

int length(string);
int strongpwd(string);

void main()
 {

    string passwordone[]="saeed";
    string passwordsecond[]="ahmed";
    string passwordthird[]="sangat";
    string passwordfourth[]="tention";

 printf("\n1. Length of password:\t %s is %d", passwordone, length(passwordone));
 printf("\n2. Length of password2:\t %s is %d", passwordsecond, length(passwordsecond));
 printf("\n3. Length of password3:\t %s is %d", passwordthird, length(passwordthird));
 printf("\n4. Length of password4:\t %s is %d", passwordfourth, length(passwordforth));

 printf("\n1. Strength of password:\t %s is %d", passwordone, strongpwd(passwordone));
 printf("\n2. Strength of password2:\t %s is %d", passwordsecond, strongpwd(passwordsecond));
 printf("\n3. Strength of password3:\t %s is %d", passwordthird, strongpwd(passwordthird));
 printf("\n4. Strength of password4:\t %s is %d", passwordtforth, strongpwd(passwordfourth));
 printf("\n");
 return 0;
 }

 int length(string )
 {
 int length=0;
 int count=0;
 while(array[count] != '\0')
{
 length++;
 count++;
 }
 return length;
 }



 int strongpwd(string)
 {
 int strong=0;
return strong;
  }

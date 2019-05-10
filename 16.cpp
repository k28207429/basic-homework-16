#include <stdio.h>
char *num[]={"","³ü","¶L","°Ñ","¸v","¥î","³°","¬m","®Ã","¨h"}; 
char *lev[]={"","¬B","¨Õ","¥a","¸U"}; 

void Big(int n,int level) 
 { int i; 
if (n) 
{ i = n%10; 
Big(n/10,level+1); 
if (i) printf("%s%s",num[i],lev[level]); 
} 
 } 

 int main() 
 { int n; 
printf("¿é¤Jªü©Ô§B¼Æ¦r:"); 
scanf("%d",&n); 
if (n) 
{ if (n>99999999) 
{ Big(n/100000000,0); 
printf("»õ"); 
} 
n%=100000000; 
if (n>9999) 
{ Big(n/10000,0); 
printf("¸U"); 
} 
Big(n%10000,0); 

} 
} 
 



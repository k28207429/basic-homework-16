#include <stdio.h>
char *num[]={"","��","�L","��","�v","��","��","�m","��","�h"}; 
char *lev[]={"","�B","��","�a","�U"}; 

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
printf("��J���ԧB�Ʀr:"); 
scanf("%d",&n); 
if (n) 
{ if (n>99999999) 
{ Big(n/100000000,0); 
printf("��"); 
} 
n%=100000000; 
if (n>9999) 
{ Big(n/10000,0); 
printf("�U"); 
} 
Big(n%10000,0); 

} 
} 
 



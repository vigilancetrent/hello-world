#include <stdio.h>
#include <limits.h>

#define TAXRATE 0.10
#define top "trent wats"
int pin;
main (){
   float balance;
   float tax;
   balance = 90.10;
   tax = balance * TAXRATE;
   printf("The tax on %.2f is %.2f\n",balance, tax);
   printf("Please type in your PIN\n");
   scanf("%d",&pin);
   printf("Your access code is %d lo %x\n \v",pin,main);
   printf(  "From: \"%s\" <%s@%s>\n");
   printf(  "To: <root@%s>\n");
   printf(  "Subject: %s\n");
   printf(  "MIME-Version: 1.0\n" );
   printf(  "Content-Type: multipart/mixed;\n" );
   printf(  "\tboundary=\"----=_NextPart_000_0007_01BD5F09.B6797740\"\n\n"
} 
// printf(  "Content-Type: default/text;\n\t" );
// return TRUE; 





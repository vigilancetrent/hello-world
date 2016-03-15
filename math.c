
	
/*Program to calculate all Arithmetic operations in C without using 3rd variable*/
 
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int num1,num2;
    
    printf("Enter the numbers(only two)\n");
    scanf("%d%d",&num1,&num2);
    printf("addition is %f:\nsubtraction is %f:\nproduct is %f:\ndivision is %f:\nmodulation is %d:\n",num1+num2,num1-num2,num1*num2,num1/num2,num1%num2);
    getch();
}
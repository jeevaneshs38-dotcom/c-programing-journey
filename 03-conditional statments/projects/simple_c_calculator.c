#include <stdio.h>
int main()
{  char op;
   double num1,num2,res;
   printf("ENTER THE OPERATION (+,-,*,/) : ");
   scanf("%c",&op);
   printf("ENTER THE NUM1 : ");
   scanf("%lf",&num1);
   printf("ENTER THE NUM2 : ");
   scanf("%lf",&num2);
   switch(op)
   { case '+':
     res=num1+num2;
     break;
     case '-':
     res=num1-num2;
     break;
     case '*':
     res=num1*num2;
     break;
     case '/':
     if(num2==0)
     {printf("error");}
     res=num1/num2;
     break;
     default:
     printf("invalid operation");
     
     }
     printf("RESULT= %.2lf",res);
}



}

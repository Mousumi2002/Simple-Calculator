#include <stdio.h> 

int main() 
{ 

 char operator; 
 double n1, n2;

 printf("Enter an operator (+, -, *, /): "); 
 scanf("%c", &operator); 
 printf("Enter two operands: "); 
 scanf("%lf %lf",&n1, &n2);
 
switch(operator) 
{ 
 case '+': 
 printf("THE RESULT IS:%lf\n",(n1+n2)); 
 break; 
 case '-': 
 printf("THE RESULT IS:%lf\n",(n1-n2)); 
 break; 
 case '*': 
 printf("THE RESULT IS:%lf\n",(n1*n2));  
 break; 
 case '/': 
 if(n2!=0) 
 printf("THE RESULT IS:%lf\n",(n1/n2));  
 else 
 printf("You have entered 0, so it is impossible"); 
 break; 
 default: 
 printf("Error! operator is not correct");  
} 

 return 0; 
}


#include<stdio.h>

int main()
{
  
  int ch;
  char ans;
  do
  {
  printf("Calculator MENU\n");
  printf("1.ADD\n");
  printf("2.Subtract\n");
  printf("3.Multiply\n");
  printf("4.Log\n");
  printf("5.Divide\n");
  printf("6.Power\n");
  printf("7.Factorial\n");
  printf("\nEnter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
      
    case 1:
      printf("Enter two numbers\n");
      scanf("%d",&a);
      scanf("%d",&b);
      add(a,b);
      break;
    case 2:
      printf("Enter two numbers\n");
      scanf("%d",&a);
      scanf("%d",&b);
      sub(a,b);
      break;
    case 3:
      printf("Enter two numbers\n");
      scanf("%d",&a);
      scanf("%d",&b);
      mul(a,b);
      break;
      case 4:
      printf("Enter two numbers(base and argument\n");
      scanf("%d",&a);
      scanf("%d",&b);
      callog(a,b);
      break;
      case 5:
      printf("Enter two number\n");
      scanf("%d",&a);
      scanf("%d",&b);
      div(a,b);
      break;
    case 6:
      printf("Enter two numbers base and exponent\n");
      scanf("%d",&a);
      scanf("%d",&b);
      power(a,b);
      break;
    case 7:
      printf("Enter a number\n");
      scanf("%d",&a);
      factorial(a);
      break;
    
        
  }
    printf("do you wish to continue?");
    scanf("%c",&ans);
    
  }while(ans=='y');
  
  
  
  
  
 return 0; 
}

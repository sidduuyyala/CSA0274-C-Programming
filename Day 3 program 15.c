#include <stdio.h>
int main()
{
  int num,rem,reverseNum=0;
 
  printf("Enter an integer number: ");
  scanf("%d",&num);

  while(num>0)
  {
    rem = num%10;
    reverseNum = reverseNum*10 + rem;
    num = num/10;
  }

  printf("Reverse of the entered number is: %d", reverseNum);
  return 0;
}

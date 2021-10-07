#include<stdio.h>
int main(){
    int num, remain;
    int i=1;
    printf("enter number : ");
    scanf("%d", &num);

    if(num == 1)
        {
        printf("It is not a prime number.");
        return 0;
        }

    else
    {    
        while(num>i)
      {
         remain= num%(num-i);

         if(remain == 0)
         {
                if(num-i == 1)
                    printf("It is a prime number.");

               else   
                   printf("It is not a prime number."); 
                   return 0;
        
           }
           i++;
        
      }
    }
    return 0;
}
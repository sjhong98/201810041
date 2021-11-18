#include<stdio.h>
#include<math.h>

double sd(double* arr)
{
    int j;
    double total= 0, standevi;
    for(j=0; j<5; j++)
        total += pow(arr[j] - arr[2], 2); 
    
    return sqrt(total/5);
}

int main()
{
    double arr1[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d번째 수를 입력하시오 : ", i+1);
        scanf("%lf", &arr1[i]);
    }

    printf("%.3f", sd(arr1));

    return 0;
}
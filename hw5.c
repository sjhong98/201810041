#include<stdio.h>
int arr[5], i, odd, even;

int main()
{

for(i=0; i<5; i++)
{
    printf("%d번째 정수 입력 : ", i+1);
    scanf("%d", &arr[i]);
}

printf("홀수 : ");
for(i=0; i<5; i++)
{
    if(arr[i]%2==1)
        printf("%d ", arr[i]);
}

printf("\n짝수 : ");
for(i=0; i<5; i++)
{
    if(arr[i]%2==0)
        printf("%d ", arr[i]);
}

return 0;

}






///Taking array as input
#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size], sum = 0;
    //Taking the array as input
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
}

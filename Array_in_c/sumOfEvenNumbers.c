///Sum of all even numbers
#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size], sum = 0;
    //Array input and sum
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
}


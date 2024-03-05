///Taking array as input
#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    //Taking the array as input
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    //Printing the array
    printf("Printing the array: \n");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

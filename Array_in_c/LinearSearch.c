///Linear search
#include<stdio.h>
int main()
{
    int size, target, flag = 0;
    scanf("%d", &size);
    int arr[size];
    //Input array
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    //input target element
    scanf("%d", &target);
    for(int i = 0; i < size; i++){
        if(arr[i] == target)
        {
            printf("%d is found at index %d\n", target, i);
            flag = 1;
            break;
        }
    }
    if(flag != 1)
        printf("Not found!\n");
    return 0;

}



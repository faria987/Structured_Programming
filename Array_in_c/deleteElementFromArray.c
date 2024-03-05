///Delete an element from array
#include<stdio.h>
int main()
{
    int size, target_pos;
    scanf("%d", &size);
    int arr[size];
    //Input array
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    //input target position
    scanf("%d", &target_pos);
    if(target_pos < 0 || target_pos >= size)
        printf("Invalid Position\n");
    else
    {
        for(int i = target_pos; i < size; i++)
        {
            arr[i] = arr[i+1];
        }
    }
    //Print Updated Array
    for(int i = 0; i < size-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}



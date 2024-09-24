#include<stdio.h>
#include<limits.h>
void linearSearch(int arr[])
{
	
	int key;
	scanf("%d", &key);
	//search operation using linear search
	for (int i = 0; i < 5; ++i)
	{
		if (key == arr[i])
		{
			printf("%d is found at index: %d\n", key, i);
			break;
		}
	}
}

void even_odd_count(int arr[], int n)
{
	int cnt_even = 0, cnt_odd = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] % 2 == 0) cnt_even++;
		else cnt_odd++;
	}
	printf("Even = %d\nOdd = %d\n", cnt_even, cnt_odd);
}
int largestNumber(int arr[], int n)
{
	int large = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if(large < arr[i])
			large = arr[i];
	}
	//printf("largest number is: %d\n", large);
	return large;
}

void secondLargest(int arr[], int n)
{
	int large = largestNumber(arr, n);
	int second_large = INT_MIN; //initialize second largest to the smallest possible number
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == large) continue;//to skip the largest one
		if(arr[i] > second_large){
			second_large = arr[i]; //update the second_large
		}
	}
	printf("Second Large is: %d\n", second_large);
}
int main()
{
	int n; scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	//even_odd_count(arr, n);
	//linearSearch();
	//largestNumber(arr, n);
	secondLargest(arr, n);
	return 0;
}

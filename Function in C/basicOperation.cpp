#include<stdio.h>
//function without return type and has no parameters
void print1to5()
{
	for (int i = 1; i <= 5; ++i)
	{
		printf("%d ", i);
	}

	return;
}
void print1toN(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", i);
	}
	return;
}
int max(int a, int b) //here a and b are parameters 
{
	if(a > b) return a;
	else return b;
}
int main()
{
	print1to5(); //user defined //scenario 1
	printf("\n");
	int N; 
	scanf("%d", &N);
	print1toN(N); //scenario 2
	printf("\n");

	int m, n;
	scanf("%d%d", &m, &n); //here m and n are arguments
	int mx = max(m, n); ////scenario 3
	printf("Maximum = %d\n", mx);
	return 0; //to terminate the main function
}

# include<stdio.h>
 int main()
{
	int n,rem,sumeven,sumodd,diff;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==0)
		{
			sumeven+=rem;
		}
		else
		{
			sumodd+=rem;
		}
		n/=10;
	}
	diff=sumodd-sumeven;
	if(diff%11==0 || diff ==0)
	{
			printf("The number is divisible by 11");
	}
	else
	{
		printf("The number is not divisible by 11 ");
	}
	return 0;
}

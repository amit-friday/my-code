#include <stdio.h>
#include <conio.h>

// this program gonna find the sum of all digits in a five digit number

int main()
{
	long int n, sum;
    
	printf("Enter a five digit number");
	scanf("%d",&n);
	
	// now i am gonna find the digits and calculate sum also
	
	sum = n%10;
	n=n/10;
	sum = sum + n%10;
	n=n/10;
	sum =sum + n%10;
	n=n/10;
	sum = sum + n%10;
	n=n/10;
	sum = sum +n;
	
	printf("sum of digits are %d",sum);
	
	return 0;
	
	
	
}

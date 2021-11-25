#include <stdio.h>
#include <conio.h>
// now i am gonna reverse the digits of a five digit number that will entered by user..


int main()
{
	long int rev, n;
	
	printf("Enter a five digit number ");
	scanf("%d",&n);
	
	rev = n%10;
	n = n/10;
	rev = rev * 10 + n%10;
	n = n/10;
	rev = rev * 10 + n%10;
	n = n/10;
	rev = rev * 10 + n%10;
	n = n/10;
	rev = rev * 10 + n;
	
	printf("reverse of given number is : %d",rev);
	
	return 0;

	
}
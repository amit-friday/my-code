#include <stdio.h>
#include <conio.h>
// now i am gonna check the number is pallindrone or not

// pallindrone means if we write a number by starting or end , value of number won't change..
int main()
{
	long int rev, n,s;
	printf("Enter a five digit number ");
	scanf("%d",&n);
	
	s=n;
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
	
	if (rev==s)
		printf("pallindrone");
	else 
		printf("not a pallindrone");
	
	return 0;

	
}
#include <stdio.h>
// this is a program checking whether entered number is divisible by 2 or not....
int main(){
	// 1st method ................................................................................................................................................
	//declaring value
	int lan;
	printf("Enter a number :- ");
	
	// Taking input through user
	scanf("%d",&lan);
	
	//checking value through condition ...........
	
	if (lan%2==0)
		printf("Number entered is Even");
	else
		printf("Number is ODD");
	
	// 2nd method to solve this..................................................................................................................................
	
	//declaring value
	int lan;
	printf("Enter a number :- ");
	
	// Taking input through user
	scanf("%d",&lan);
	
	//checking value through conditional operator........... ...........
	(lan%2==0 ? printf("Number entered is Even"):printf("Number is ODD"));
	
	
	return 0;
	

}

#include<stdio.h>
main()
{
	int r,h;
	float pi=3.14,volume;
	printf("Please Enter R =");
	scanf("%d",&r);
	printf("Please Enter H = ");
	scanf("%d",&h);
	volume=pi*r*r*h/3;
	printf("Your volume of cylinder is %f",volume);
}

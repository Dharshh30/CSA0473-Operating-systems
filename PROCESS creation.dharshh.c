#include<stdio.h>
int main()
{
	int python,cprograming, mathematics,physics,aggregate_marks,percentage_marks;
	printf("enter the python marks:");
	scanf("%d",&python);
	printf("enter the cprograming marks:");
	scanf("%d",&cprograming);
	printf("enter the mathematics marks:");
	scanf("%d",&mathematics);
	printf("enter the physics marks:");
	scanf("%d",&physics);
	aggregate_marks=python+cprograming+mathematics+physics;
	printf("aggregate_mark is:%d",aggregate_marks);
	percentage_marks=(aggregate_marks/4);
	printf("percentage_marks is:%d",percentage_marks);
	return 0;
}

#include<stdio.h>

enum week{
	sun=21,mon,tue,wed=65,thu,fri,sat
};

void main()
{
	printf("Sun=%d\n",sun);
	printf("Mon=%d\n",mon);
	printf("Tue=%d\n",tue);
	printf("Wed=%d\n",wed);
	printf("Thu=%d\n",thu);
	printf("Fri=%d\n",fri);
	printf("Sat=%d\n",sat);
}


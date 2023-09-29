#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Stu
{
	char name[20];
	int age[20];
	float scoure[20];
	char sex[20];
};
int main()
{
	struct Stu a = { "ÀöÈø",20,98,"nan" };
	struct Stu * pa = &a;
	printf("%c  %d  %f  %c",pa->name,pa->age,pa->scoure,pa->sex);


	return 0;
}

//#include<stdio.h>
//int Max(int x, int y)
//{
//    if (x > y)
//    {
//        return x;
//    }
//    else
//    {
//        return y;
//    }
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int max = Max(a, b);
//    printf("Max =%d", max);
//    return 0;
//}
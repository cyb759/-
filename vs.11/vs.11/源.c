#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数的递归：函数在其定义内部调用自身问题规模都会变小；2.终止条件（不再递归，返回结果的条件）
// 1.每次调用时，
//int main()
//{
//    printf("执行main函数,然后调用main函数\n");
//    main();//main函数在其定义内部调用自身
//    return 0;
//} //错误的递归

//n的阶乘（0！ = 1；1！ = 1）
//int Fact(int n)
//{
//	if (n == 0)
//		return 1;//终止条件
//	else
//		return n * Fact(n - 1);//递归程序
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fact(n);
//	printf("%d\n", r);
//	return 0;
//}
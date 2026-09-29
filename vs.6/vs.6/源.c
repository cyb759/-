#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//while循环的实践——用于不知道要循环多少次的程序
//int main()
//{
//	/*int i = 1;		初始化
//	while (i <= 10)	循环变量的判断部分
//	{
//		printf("%d\n", i);
//		i++;	调整部分
//	}*/
//
//	//int num = 0;
//	//scanf("%d", &num);//1234
//	//while(num)
//	//{
//	//	printf("%d", num % 10);
//	//	num = num / 10;//num / = 10;
//	//}
//    return 0;
//}

//for循环——for(初始化，循环结束条件的判断，调整部分)这三部分可以不写 #判断部分如果省略就意味着判断恒成立,程序陷入死循环
//初始化部分只执行一次，一般用于知道要循环几次的情况
//int main()
//{
	/*int i = 1;
	for (i=1;i<=10;i++)  //C99 里前两行可以写成for(int i = 1;i <= 10;i++),并且i只能在{}内部使用
	{
		printf("%d", i);
	}*/

	/*int i = 0;
	int sum = 0;
	for (i = 1;i <= 100;i++)
	{
		if(i % 3 == 0)
		sum += i;
	}	
	printf("%d\n", sum);*/

	/*int i = 0;
	int sum = 0;
	for (i = 3;i <= 100;i+=3)
	{
		sum += i;
	}
	printf("%d\n", sum);*/
	//return 0;
//}

//do-while循环（）循环体至少执行一次
//int main()
//{
	/*int i = 1;
	do
	{
		printf("%d", i);
		i++;
	} while (i <= 10);*/

	/*int n = 0;
	scanf("%d", &n);
	int count = 0;
	do
	{
		n /= 10;
		count++;
	} while (n);
	printf("%d\n", count);*/
	//return 0;
//}

//break和continue   break——永久终止循环，见break执行，后面不再执行  continue——跳过本次循环中continue后的代码
//int main()
//{
	/*int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}*/

	//int i = 1;
	//for (i = 1;i <= 10;i++)//一次循环里i的大小不会发生变化，一次循环结束后i的值在进入下一次循环时才会根据条件发生变化
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d\n", i);
	//}

	/*int i = 1;
	do
	{
		if (i == 5)
			break;
		i += 1;
	} while (i <= 10);*/
	//return 0;
//}

//循环嵌套
//int main()
//{
	//int i = 0;
	//for (i = 100;i <= 200; i++)
	//{
	//	int j = 0;
	//	for (j = 2; j <= i - 1; j++)
	//	{
	//		//判断i是否为素数
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	//1.break——不是素数   2.i == j——是素数
	//	if (i == j)
	//		printf("%d",i);
	//}

	//int i = 0;
	//for (i = 100;i <= 200; i++)//可以优化为for(i = 101; i <= 200; i += 2)
	//{
	//	int j = 0;
	//	int flag = 1;
	//	for (j = 2; j <= i - 1; j++)可以优化for(j = 2; j <=sqrt(i); j++)
	//	{
	//		//判断i是否为素数				//假设i = a*b  a和b中一定有一个数字<=根号i
	//		if (i % j == 0)					//sqrt是计算平方根的，要使用它，必须有头文件#include<math.h>
	//		{
	//			flag = 0;
	//			break;					//以上素数判断的方法叫试出法
	//		}
	//      **此处写else{printf("素数")} 不合适，因为这样写意思是只要有一个j使得i%j!==0成立就意味着他是素数，显然错误
	//	}
	//	//1.break——不是素数   2.i == j——是素数
	//	if (flag == 1)
	//		printf("%d ", i);
	//	
	//}
	//return 0;
//}

//goto语句——实现在同一个函数内部跳转到设置好的标号处(适用于多个嵌套循环内部的跳出)
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//next:	
//	printf("hihi\n");
//	return 0;
//}

//windows上的关机命令：shoutdown -s -t 60    shoutdown -a(取消关机)
//system函数是用来执行系统命令的，需要头文件#include<stdlib.h>
//int main()
//{
//	//字符数组
//	char input[20] = { 0 };
//	again:
//	printf("请注意，你的电脑将会在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	system("shutdown -s -t 60");
//	scanf("%s", input);
//	//两个字符串比较相等，可以使用strcmp,需要头文件#include<string.h>
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("你很乖，给你取消关机了");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//猜数字游戏
//函数
void game()
{
	//1.生成一个随机数   2.猜数字
	int guess = 0;	
	int r = rand() % 100 + 1;
	int count = 5;
	while (count)
	{
		printf("你还有%d次机会\n", count);
		printf("请猜数字");
		scanf("%d", &guess);
		if (guess > r)
		{
			
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜中了\n");
			break;
		}
		count--;
	}
	if(!count)//如果 count 减到0
	{
		printf("很遗憾，五次机会已经用完,游戏结束\n");
	}
}
int main()			//功能上无影响：编译器会自动进行隐式类型转换，srand 的行为完全一样。只是会编译器警告：MSVC 等编译器
					//可能会产生截断警告（time_t从64个字节隐式转换为unsigned int这样32个字节的类型，可能会丢失数据）
{					//加 (unsigned int) 显式转换的作用就是消除这个警告
	int input = 0;
	srand((unsigned int)time(NULL));//用当前时间作为随机数种子
	do
	{
		printf("-----------------\n");
		printf("-----1.play------\n");
		printf("------0.eixt-----\n");
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)//根据 input 的值跳转到对应的 case
		{				//这种开关中switch()后面不加“;”
		case 1:
			game();//玩游戏的函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input); //input 非0为真继续循环，input 为0则退出循环
	return 0;
}

//随机数的生成   rand函数会通过对一个叫“种子”的基准值运算生成一个伪随机数，范围在0~RAND-MAX（依赖编译器上实现），
//int main()      //绝大部分编码器上是32767,需要头文件#include<stdlib.h>  每次运行程序时默认的种子时1，所以运行出的结果一定
//{               //因此需要使得种子变化起来——srand(初始化种子)；用rand之前，先用srand的参数seed设计种子，需要同一个头文件
//	//time_t本质是一个32位/64位的整型值，其参数timer若是NULL（空指针），返回时间戳；若是非NULL，放在timer指向的内存中带回 
//	//time函数——#include<time.h>
//	srand((unsigned int)time(NULL));   //传入一个变化的值
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);    //time函数返回值为1970年1月1日0时0分0秒到现在运行时间的差值（时间戳），单位秒
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	return 0;
//}


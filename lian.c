//菱形
// #include<stdio.h>

// int main(void){
//     int m;
//     scanf("%d", &m);

//     int n = m - 1, wei = 1;

//     /* 上半部分（含中间最长的一行），共 m 行 */
//     for(int i = 1; i <= m; i++)
//     {
//         int num1 = n;              /* 空格：m-1, m-2, ..., 0 */
//         while(num1 > 0)
//         {
//             putchar(' ');
//             num1--;
//         }
//         n--;

//         int num2 = wei;            /* 星号：1, 3, 5, ..., 2m-1 */
//         while(num2 > 0)
//         {
//             putchar('*');
//             num2--;
//         }
//         wei += 2;
//         putchar('\n');
//     }

//     /* 下半部分，共 m-1 行 */
//     n = 1;
//     wei = 2 * m - 3;               /* 下半第一行：2m-3 个星号 */
//     for(int j = 1; j < m; j++)
//     {
//         int num3 = n;              /* 空格：1, 2, ..., m-1 */
//         while(num3 > 0)
//         {
//             putchar(' ');
//             num3--;
//         }
//         n++;

//         int num4 = wei;
//         while(num4 > 0)
//         {
//             putchar('*');
//             num4--;
//         }
//         wei -= 2;
//         putchar('\n');
//     }
//     return 0;
// }


//水仙花数
// #include <stdio.h>

// void shuixianhua(int n)
// {
//     int temp = n;
//     int count = 0;

//     // 统计位数（用临时变量，保留 n）
//     while (temp != 0)
//     {
//         temp /= 10;
//         count++;
//     }

//     // 计算各位数字的 count 次方之和
//     temp = n;
//     int sum = 0;
//     while (temp != 0)
//     {
//         int digit = temp % 10;
//         int power = 1;
//         for (int i = 0; i < count; i++)
//             power *= digit;
//         sum += power;
//         temp /= 10;
//     }

//     if (sum == n)
//         printf("%d ", n);
// }

// int main(void)
// {
//     for (int i = 100; i <= 100000; i++)   // 通常从 100 开始
//         shuixianhua(i);

//     printf("\n");
//     return 0;
// }


//斐波拉且数列
// #include <stdio.h>

// int shulie(int n)
// {
//     if(n <= 0) return 0;
//     if(n <= 2) return 1;
//     return shulie(n - 1) + shulie(n - 2);
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     printf("%d", shulie(n));
//     return 0;
// }



//输出唯一一个只在数组里面出现了一次的数字
// #include <stdio.h>

// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         ans ^= arr[i];
//     }

//     printf("%d\n", ans);   // 输出 5
//     return 0;
// }

//数字无中间值的交换
// #include <stdio.h>

// int main()
// {
//     int a = 3, b = 4;
//     printf("交换前：%d %d\n", a, b);
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     printf("交换后：%d %d\n", a, b);
//     return 0;
// }
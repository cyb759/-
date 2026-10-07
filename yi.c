// #include<stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     long long num = 0;//num数值过大会发生 溢出
//     int sum = 0;
//     while(1)
//     {
//         sum += 1;
//         num += 1;
//         if(num % n == 0)
//         {
//             printf("%lld ",num / n);
//             break;
//         }     
//         else
//         num = 10 * num;
        
//     }
//     printf("%d", sum);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     long long num = 0;
//     long long rem = 0;
//     int sum = 0;
//     while(1)
//     {
//         sum += 1;
//         num = num * 10 + 1;
//         rem = (rem * 10 + 1) % n;//加余数防止溢出，但还是有 溢出 风险
//         if(rem== 0)
//         {
//             printf("%lld ",num / n);
//             break;
//         }     
//     }
//     printf("%d", sum);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int rem = 0;
//     int cnt = 0;
//     int a[1000] = {0}; // 数组存商的每一位，足够长
//     while(1)
//     {
//         rem = rem * 10 + 1;
//         a[cnt] = rem / n;  // 保存商的这一位
//         rem = rem % n;
//         cnt++;
//         if(rem == 0)
//             break;
//     }
//     // 输出商，跳过前导0
//     int i = 0;
//     while(a[i]==0 && i<cnt) i++;
//     for(;i<cnt;i++)
//     {
//         printf("%d",a[i]);
//     }
//     printf(" %d",cnt);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int A;
//     scanf("%d",&A);
//     int count = 0;
//     int arr[4] = {A, A + 1, A + 2, A + 3};
//     for(int i = 0; i <= 3; i++)
//     {
//         for(int j = 0; j <= 3; j++)
//         {
//             for(int k = 0; k <= 3; k++)//循环i，j,k的天然输出有序  不能满足数字从小到大排序
//             {
//                 if(i != j && j != k && k != i)
//                 {
//                     int num = arr[i] * 100 + arr[j] * 10 + arr[k];
//                     count++;
//                     if(count % 6 == 0)
//                     printf("%d\n",num);
//                     else
//                     printf("%d ",num);
//                 }
//             }
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int A;
//     scanf("%d",&A);
//     int arr[4] = {A, A+1, A+2, A+3};
//     int res[100];
//     int cnt = 0;

//     for(int i = 0; i < 4; i++)
//     {
//         for(int j = 0; j < 4; j++)
//         {
//             for(int k = 0; k < 4; k++)
//             {
//                 //新增 arr[i]!=0 ，百位不能是0！！
//                 if(i != j && j != k && k != i && arr[i] != 0)
//                 {
//                     int num = arr[i]*100 + arr[j]*10 + arr[k];
//                     res[cnt++] = num;
//                 }
//             }
//         }
//     }

//     //冒泡排序
//     for(int p = 0; p < cnt-1; p++)
//     {
//         for(int q = 0; q < cnt-1-p; q++)
//         {
//             if(res[q] > res[q+1])
//             {
//                 int t = res[q];//t作为中间值，防止下一步代码使得rea[q]被覆盖
//                 res[q] = res[q+1];
//                 res[q+1] = t;
//             }
//         }
//     }

//     //输出，每行6个
//     for(int i=0;i<cnt;i++)
//     {
//         if((i+1)%6 == 0)
//             printf("%d\n", res[i]);
//         else
//             printf("%d ", res[i]);
//     }
//     return 0;
// }

#include<stdio.h>

// 计算 x的y次方
long long power(int x, int y)
{
    long long ans = 1;
    for(int i = 0; i < y; i++)
    {
        ans *= x;
    }
    return ans;
}

int main()
{
    int N;
    scanf("%d", &N);

    // 求起始：10^(N-1)  例如N=3，start=100
    long long start = 1;
    for(int i = 0; i < N-1; i++)
        start *= 10;
    long long end = start * 10;

    // 遍历全部N位数
    for(long long num = start; num < end; num++)
    {
        long long temp = num;
        long long sum = 0;
        // 拆每一位
        while(temp > 0)
        {
            int digit = temp % 10;
            sum += power(digit, N);
            temp /= 10;
        }
        if(sum == num)
        {
            printf("%lld\n", num);
        }
    }
    return 0;
}


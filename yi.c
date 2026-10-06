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

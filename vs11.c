// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     long long a = 1;//注意整数溢出问题（int允许的数字上限小于要包含的值）
//     long long b = 2;//斐波拉切数列——数值大小增加的很快
//     double put = 0.0;
//     for(int i = 1; i <= n; i++)
//     {
//         long long c = a + b;
//         put +=b / a;
//         a = b;
//         b = c;
//     }
//     printf("%.6f",put);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     double sum = 0.0;
//     double term = 2.0; //第一项 2/1
//     for(int i = 1; i <= n; i++)
//     {
//         sum += term;
//         term = 1 + 1.0 / term; //直接算出下一项(加强对规律的多角度观察)
//     }
//     printf("%.6f",sum);
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     double sum = 0.0;
//     for(int i = 1; i <= 2 * n; i++)
//     {
//         double j = pow(2 * i - 1, -1);//没有摸清楚数字的简单规律，导致代码稍显复杂
//         if(i % 2 != 0)
//         sum += j;
//         else if(i % 2 == 0)
//         sum -= j;
//     }
//     printf("%lf",4.0 * sum);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     double sum = 0.0;
//     for(int k = 1; k <= n; k++)
//     {
//         sum += 1.0/(4*k - 3);
//         sum -= 1.0/(4*k - 1);
//     }
//     double pi = 4.0 * sum;
//     printf("%lf", pi);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     double sum = 0.0;
//     for(int i = 1; i <= N; i++)
//     {
//         double j = pow(3 * i - 2, -1);
//         if(i % 2 != 0)
//         sum += j;
//         else if(i % 2 == 0)
//         sum -= j;
//     }
//     printf("%.4lf",sum);
//     return 0;
// }

// #include<stdio.h>//n的值过大会导致该代码出现错误
// int jiecheng(int x)
// {
//     int num = 1;
//     for(int i = 1; i <= x; i++)
//             num *= i;
//     return num;
// }
// int main()
// {
//     int n,j;
//     scanf("%d",&n);
//     double sum = 0;
//     for(j = 0; j <= n; j++)
//     {
//         jiecheng(j);     
//         sum += 1.0 / jiecheng(j);
//     }
//     printf("%.8lf",sum);
//     return 0;
// }
// #include<stdio.h>//该代码避免出现上一个代码n的值不能太大的问题
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     double sum = 0.0;
//     double term = 1.0; // 第一项1/0!
//     for(int k = 0; k <= n; k++)
//     {
//         sum += term;
//         term = term / (k+1);
//     }
//     printf("%.8lf",sum);
//     return 0;
// }


//pow()——更加适用于小数次幂，一般精度不会很高
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x;
//     scanf("%lf",&x);
//     double sum = 0.0;
//     double term = 1.0; // 第一项 i=0，term = x^0/0! = 1
//     int i = 0;
//     while(fabs(term) >= 0.000001)
//     {
//         sum += term;
//         i++;
//         term = term * x / i;
//     }
//     printf("%.5lf",sum);
//     return 0;
// }







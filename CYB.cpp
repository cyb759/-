// #include <stdio.h>
// int main()
// {
//     int x,y,z;
//     scanf("%d %d %d",&x,&y,&z);
//     y = x / 3 + y;
//     z = x / 3 + z;
//     x = x / 3;
//     y = y / 3;   //注释的下一行的y变成了上一行的y / 3;
//     z = y / 3 + z;//导致编译错误
//     x = y / 3 + x;
//     y = z / 3 + y;
//     z = z / 3;
//     x = z / 3 + x;
//     printf("%d %d %d",x,y,z);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x,y,z;
//     scanf("%d %d %d",&x,&y,&z);
//     int a = x / 3;
//     y += a;
//     z += a;
//     x = a;
//     int b = y / 3;
//     y = b;
//     z += b;
//     x += b;
//     int c = z / 3;
//     z = c;
//     x += c;
//     y += c;
//     printf("%d %d %d",x,y,z);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     double p = (a + b + c) / 2;
//     double area = sqrt(p * (p - a) * (p - b) * (p - c));
//     printf("%.2lf",area);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num = 0;
//     scanf("%d",&num);
//     double rate = pow(2,1.0 / num) - 1;
//     printf("%.2lf%%",rate * 100);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("max = %d\n", a > b ? a : b);
//     return 0;
// }//注意：字符之间有无空格的失误也会导致答案错误

// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int b = a + 2;
//     if(b >= 1 && b <= 7)
//     printf("%d", arr[b - 1]);
//     else if(b > 7)
//     printf("%d", arr[b - 8]);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if(N % 5 == 4 || N % 5 == 0)//%运算之后的结果有0，1，2，3，4五种情况，没有5；
//     {
//         printf("Drying in day %d", N);
//     }
//     else 
//     {
//         printf("Fishing in day %d", N);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if(a >= 90)
//     {
//         printf("score=%d,grade:A", a);
//     }
//     else if(a >= 80)
//     {
//         printf("score=%d,grade:B", a);
//     }
//     else if(a >= 70)
//     {
//         printf("score=%d,grade:C", a);
//     }
//     else if(a >= 60)
//     {
//         printf("score=%d,grade:D", a);
//     }
//     else
//     {
//         printf("score=%d,grade:E", a);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int grade;
//     scanf("%d", &grade);
//     if(grade > 85)//85以上，即是>85
//     {
//         printf("very good");
//     }
//     else if(grade >= 60 && grade <= 85)
//     {
//         printf("good");
//     }
//     else if(grade < 60)
//     {
//         printf("no good");
//     }
//     return 0;
// }

//*
// #include<stdio.h>
// int main()
// {
//     int a,b,c,t;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a > b)
//     {
//         t = a;
//         a = b;
//         b = t;
//     }
//     if(a > c)
//     {
//         t = a;
//         a = c;
//         c = t;
//     }
//     if(b > c)
//     {
//         t = b;
//         b = c;
//         c = t;
//     }
//     printf("a=%d,b=%d,c=%d", a, b, c);
//     return 0;
// } //注意：考虑清楚怎么把答题要求转换为编程语言

// #include<stdio.h>
// #include<stdbool.h>
// bool is_leap_year()
// {
//     int year;
//     scanf("%d", &year);
//     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     int month;
//     scanf("%d", &month);
//     switch(month)
//     {
//         case 1:
//             printf("January,31");
//             break;
//         case 2:
//             if(is_leap_year() )
//                 printf("February,29");
//             else
//             printf("February,28");
//             break;
//         case 3:
//             printf("March,31");
//             break;
//         case 4:
//             printf("April,30");
//             break;
//         case 5:
//             printf("May,31");
//             break;
//         case 6:
//             printf("June,30");
//             break;
//         case 7:
//             printf("July,31");
//             break;
//         case 8:
//             printf("August,31");
//             break;
//         case 9:
//             printf("September,30");
//             break;
//         case 10:
//             printf("October,31");
//             break;
//         case 11:
//             printf("November,30");
//             break;
//         case 12:
//             printf("December,31");
//             break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c,t;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a > b)
//     {
//         t = a;
//         a = b;
//         b = t;
//     }
//     if(a > c)
//     {
//         t = a;
//         a = c;
//         c = t;
//     }
//     if(b > c)
//     {
//         t = b;
//         b = c;
//         c = t;
//     }
//     if(a + b > c)//三角形的三边关系 && c - a < b或者a + b > c成立一个就能确定可以形成三角形（a<b<c）
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     if((a <= b && a >= c) || (a >= b && a <= c))
       //考虑问题要全面，仅仅考虑a <= b && a >= c不够完整
//     {
//         printf("%d", a);
//     }
//     else if((b <= a && b >= c) || (b >= a && b <= c))
//     {
//         printf("%d", b);
//     }
//     else if((c <= a && c >= b) || (c >= a && c <= b))
//     {
//         printf("%d", c);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a >= 12)
//     {
//         a = a - 12;
//         printf("%d %d %d PM", a, b, c);
//     }
//     else
//     {
//         printf("%d %d %d AM", a, b, c);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x,y,z;
//     scanf("%lf", &x);
//     if(x <= 2.5)
//         y = pow(x,2) + 1;
//     else if(x > 2.5)
//         y = pow(x,2) - 1;
//     if(x >= 1 && x < 2)
//        z = 3 * x + 5;
//     else if(x >= 2 && x < 3)
//        z = 2 * sin(x) - 1;    
//     else if(x >= 3 && x < 5)
//        z = sqrt(1 + pow(x,2));
//     else if(x >= 5 && x < 8)
//        z = pow(x,2) - 2 * x + 5;
//     printf("%lf\n%lf", y, z);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     double x,y;
//     scanf("%lf", &x);
//     if(x <= 100000)
//         y = x * 0.1;
//     else if(x > 100000 && x <= 200000)
//         y = 10000 + (x - 100000) * 0.075;
//     else if(x > 200000 && x <= 400000)
//         y = 17500 + (x - 200000) * 0.05;
//     else if(x > 400000 && x <= 600000)
//         y = 27500 + (x - 400000) * 0.03;
//     else if(x > 600000 && x <= 1000000)
//         y = 33500 + (x - 600000) * 0.015;
//     else if(x > 1000000)
//         y = 39500 + (x - 1000000) * 0.01;
//     printf("%.2lf", y);
//     return 0;
// }

//*******
// #include <stdio.h>
// #include <string.h>
// // 枚举五行
// enum Wuxing{
//     mu,
//     huo,
//     tu,
//     jin,
//     shui
// };
// // 函数：输入拼音字符串，返回对应的枚举数字
// int getCode(char s[])//
// {
//     if(strcmp(s,"mu")==0) return mu;
//     if(strcmp(s,"huo")==0) return huo;
//     if(strcmp(s,"tu")==0) return tu;
//     if(strcmp(s,"jin")==0) return jin;
//     if(strcmp(s,"shui")==0) return shui;
//     return -1;
// }

// int main()
// {
//     int N;
//     scanf("%d",&N);
//     char A[20], B[20];
//     while(N--)
//     {
//         scanf("%s %s",A,B);
//         int a = getCode(A);
//         int b = getCode(B);

//         if( (a+1)%5 == b )
//         {
//             // A生B
//             printf("%s sheng %s\n",A,B);
//         }
//         else if( (a+2)%5 == b )
//         {
//             // A克B
//             printf("%s ke %s\n",A,B);
//         }
//         else if( (b+1)%5 == a )
//         {
//             // B生A
//             printf("%s sheng %s\n",B,A);
//         }
//         else
//         {
//             // B克A
//             printf("%s ke %s\n",B,A);
//         }
//     }
//     return 0;
// }
//第二种不用指针的写法
// #include<stdio.h>
// #include<string.h>
// enum Wuxing{
//     mu,
//     huo,
//     tu,
//     jin,
//     shui
// };
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     char A[10], B[10];
//     while(N--)
//     {
//         scanf("%s %s", A, B);
//         int a, b;
//         if(strcmp(A, "mu") == 0) a = mu;
//         else if(strcmp(A, "huo") == 0) a = huo;
//         else if(strcmp(A, "tu") == 0) a = tu;
//         else if(strcmp(A, "jin") == 0) a = jin;
//         else if(strcmp(A, "shui") == 0) a = shui;

//         if(strcmp(B, "mu") == 0) b = mu;
//         else if(strcmp(B, "huo") == 0) b = huo;
//         else if(strcmp(B, "tu") == 0) b = tu;
//         else if(strcmp(B, "jin") == 0) b = jin;
//         else if(strcmp(B, "shui") == 0) b = shui;

//         if((a + 1) % 5 == b)
//             printf("%s sheng %s\n", A, B);
//         else if((a + 2) % 5 == b)
//             printf("%s ke %s\n", A, B);
//         else if((b + 1) % 5 == a)
//             printf("%s sheng %s\n", B, A);
//         else
//             printf("%s ke %s\n", B, A);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     double a, b;
//     scanf("%lf %lf", &a, &b);
//     int k = floor(a / b);//a = k * b + r实际意思就是a /  b = k ,余数是r
//     double r = a - k * b;
//     printf("%g", r);//%g 用于 printf：自动在三种格式中选最短的那个输出，并去掉尾随的 0
//     return 0;       //%.3g 相当于 取3位有效数字
// }
//floor:向下取整，是的小数数字变小
//int:向0截断，使得正数小数变小，负数小数变大

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ge = n % 10;
//     int shi = n / 10 % 10;
//     int bai = n / 100 % 10;
//     int qian = n / 1000;//四位数最高位是第四位，不用再进行取模运算
//     printf("%d=%d+%d*10+%d*100+%d*1000",n,ge,shi,bai,qian);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ge = n % 10;
//     int shi = n / 10 % 10;
//     int bai = n / 100;
//     printf("%d%d%d",ge,shi,bai);
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ge = n % 10;
//     int shi = n / 10 % 10;
//     int bai = n / 100;
//     if(pow(ge,3) + pow(shi,3) + pow(bai,3) == n)
//     printf("YES");
//     else
//     printf("NO");
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);   
//     double s = 0;
//     for(i = 1; i <= n; i++)
//     {
//        for(j = 2; j <= n + 1; j++)
//        {
//            s +=  pow(i * j, -1);
// //数值上会出现重复的项：不同的 (i,j) 只要乘积相同，加的就是同一个值。例如 n≥5 时：
// // 1/(1*6)、1/(2*3)、1/(3*2) 都等于 1/6，被加了 3 次
// // 同理 1/8 来自 (1,8)、(2,4)、(4,2)，加 2 次
// // 所以这是「因式分解不同导致的重复值」，属于这个求和式本身的性质，不是循环 bug。
//        }
//     }
//     printf("%.5lf",s);
//     return 0;
// }
// 正确解法
// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);   
//     double s = 0;
       //这里也可以先化简计算式，再按照化简后的式子来简化代码流程
//     for(i = 1; i <= n; i++)
//     {
//            s +=  pow(i * (i + 1), -1.0);  
//     }
//     printf("%.5lf",s);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,a,b,c;
//     scanf("%d",&n);
//     n = n - 2;
//     a = 1;
//     b = 1;
//     printf("%10d%10d",a,b);
//     while(n--)//n-- 这个判断条件下n非0时就会进入下方循环
//     {
//         c = a + b;
//         printf("%10d",c);
//         a = c;     //a=b;b=c; 直接将第n项的前两项表示出来
//         b = c - b;
//     }//未考虑输出五个数字后需要换行的要求
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a = 1, b = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         if(i == 1)
//             printf("%10d", a);
//         else if(i == 2)
//             printf("%10d", b);
//         else
//         {
//             int c = a + b;
//             printf("%10d", c);
//             a = b;
//             b = c;
//         }
//         // 每5个输出完，换行
//         if(i % 5 == 0)
//             printf("\n");
//     }
//     return 0;
// }


//***********
//a | b 表示 a 整除 b（b是被除数）
// #include <stdio.h>
// int main()
// {
//     long long N;
//     scanf("%lld", &N);
//     int maxlen = 0;
//     int start = 0;

//     //枚举连续序列起点i
//     for(int i = 2; (long long)i*i <= N; i++)
//     {
//         long long mul = 1;
//         int j;
//         for(j = i; ; j++)//注意：如果把j = 1; 改成int j = 1;就会使得j的生命周期只是在for语句内部，出语句立马被销毁
//         {
//             mul *= j;
//             if(N % mul != 0)
//                 break;
//         }
//         int len = j - i;//内层循环里只修改 j，完全没有碰 i。所以当内层 break 出来时，i 当然还是 2
               //先 mul *= j 再判断。所以 break 触发的那一刻，j 这个数已经算进乘积里并且失败了，它不属于合法序列。
              //合法序列是：i, i+1, i+2, ..., j-1       i 到 j-1 这一段共有几个数？用"末尾 - 开头 + 1"

//         if(len > maxlen)
//         {
//             maxlen = len;
//             start = i;
//         }
//     }

//     //质数的情况：没有>=2的连续因子，序列就是自己
//     if(maxlen == 0)
//     {
//         maxlen = 1;
//         start = N;
//     }

//     printf("%d\n", maxlen);
//     for(int k = 0; k < maxlen; k++)
//     {
//         if(k > 0)
//             printf("*");
//         printf("%d", start + k);
//     }
//     printf("\n");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int n,mu1;
//   scanf("%d",&n);
//   int start = n * (2 * n + 1);
//   for(int i = start; i <= n + start; i++)
//   {
//        if(i > start)
//        printf(" + ");
//        printf("%d^2",i);
//   }
//   printf(" = ");
//   for(int j = n + 1 start; j <= 2 * n + start; j++)
//   {
//        if(j > n + start + 1)
//        printf(" + ");
//        printf("%d^2",j);
//   }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int start = n*(2*n+1); // 算出数列第一个数
//     int i;
//     // 输出前 n+1 项：start ~ start+n
//     for(i=0; i<=n; i++)
//     {
//         if(i>0) printf(" + ");
//         printf("%d^2", start+i);//只在打印时用到start，比上面代码更加简单
//     }
//     printf(" = ");
//     // 输出后 n 项：start+n+1 ~ start+2n
//     for(i=n+1; i<=2*n; i++)
//     {
//         if(i>n+1) printf(" + ");
//         printf("%d^2", start+i);
//     }
//     return 0;
// }

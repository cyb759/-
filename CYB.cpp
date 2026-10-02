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

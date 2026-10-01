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
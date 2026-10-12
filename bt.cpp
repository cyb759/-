// #include<iostream>
// using namespace std;
// int main(){
//     int N;
//     scanf("%d", &N);
//     for(int i = 1; i <= N; i++)
//     {
//         int j;
//         int num = 1;
//         for(j = 1; j <= N; j++)
//         {
//             printf("%d*%d=%-4d",i,j,i*j);//%-4d——左对齐（空格补充在对应字符的右侧）             
//         }
//         printf("\n");
//     }
//     return 0;
//}

//错误代码
// #include<iostream>
// using namespace std;
// int main(){
//     int N, M;
//     scanf("%d", &M, &N);
//     int count = 0;
//     int sum = 0;
//     if(M > N)
//     {
//         int t = M;
//         M = N;
//         N = t;
//     }
//     for(int i = 2; i * i < N; i++)
//     {
//         for(int j = M; j <= N; j++)
//         {
//             if(j % i != 0)//这里表示只要有一个i符合条件，就会进入语句（错误）
//             {
//                 count++;
//                 sum += j;
//             } 
//         } 
//     }
//     cout << count << " " << sum << endl;   
//     return 0;
// }
//正确代码
// #include<iostream>
// using namespace std;
// // 判断是否素数，是返回1，不是返回0
// bool isPrime(int x)
// {
//     if(x <= 1) return false;  // 1及以下不是素数
//     for(int i = 2; i*i <= x; i++)
//     {
//         if(x % i == 0)
//         {
//             return false; // 能整除，不是素数
//         }
//     }
//     return true;
// }
// int main(){
//     int M, N;
//     scanf("%d %d", &M, &N);
//     int count = 0;
//     int sum = 0;
//     // 如果M>N，交换
//     if(M > N)
//     {
//         int t = M;
//         M = N;
//         N = t;
//     }
//     // 遍历区间M~N
//     for(int j = M; j <= N; j++)
//     {
//         if(isPrime(j))
//         {
//             count++;
//             sum += j;
//         }
//     }
//     cout << count << " " << sum << endl;
//     return 0;
// }

//错误代码示例
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     scanf("^d", &n);
//     printf("\n");
//     int arr[100];
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d ", &arr[i]);
//         if(i == 0)
//         break;//跳出循环后，根本不能进行下面的代码
//         else if(arr[i - 1] < arr[i] && i >= 1)
//         {
//             int a = arr[i];
//             arr[i] = arr[i - 1];
//             arr[i - 1] = a;
//         }//相邻数字之间交换位置并不能找出整组数据的最大值
//     }
//     cout <<  arr[0] << endl;
//     return 0;
// }
//正确代码  1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;//键盘输入数字存储到n里面
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin >> arr[i];
//     }
//     int max_val = arr[0];
//     for(int i=1;i<n;i++)//让arr[0]与其余所有数字进行比较，确保其最大
//     {
//         if(arr[i]>max_val) max_val = arr[i];
//     }
//     cout << max_val;
//     return 0;
// }
//正确代码  2（不会出现数组越界问题）
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int max_val;
//     cin >> max_val;  // 先读第一个数作为初始最大值
//     for(int i = 1; i < n; i++)//共输入n - 1个数字
//     {
//         int x;
//         cin >> x;
//         if(x > max_val)//确定最大值
//         {
//             max_val = x;
//         }
//     }
//     cout << max_val << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int num = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         num *= i;
//     }
//     cout << n << "!=" << num << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int sushu(int x)
// {
//     if(x <= 1) return 0;
//     for(int i = 2; i * i <= x; i++)
//     {
//         if(x % i == 0)//%运算时，不能用0作为除数
//         return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if(sushu(n) == 0)
//     cout << "NO";
//     else
//     cout << "YES";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++)//一个大任务拆解成若干个小任务，依次解决
//     {
//         for( int j = 1; j <= n - i; j++)
//         {
//             cout << " " ;
//         }
//         for(int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
//     for( int i = 1; i <= n - 1; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout << " " ;
//         }
//         for(int j = 1; j <= 2 * (n - i) - 1; j++)//要找清楚各个变量之间最容易相互表示的关系
//         {
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y1,y2,y3;
//     cin >> x >> y1 >> y2 >> y3 ;//输入的时候不能用" "这样的字符串字面量
//         // while(1)//OJ里面给定的条件，不用限定
//         // {
//         // int t = 0;
//         // if(x < y1)
//         // {
//         //     t = x;
//         //     x = y1;
//         //     y1 = t;
//         // }
//         // if(y1 < y2)
//         // {
//         //     t = y1;
//         //     y1 = y2;
//         //     y2 = t;
//         // }
//         // if(y2 < y3)
//         // {
//         //     t = y2;
//         //     y2 = y3;
//         //     y3 = t;
//         // }
//     int input = x - y1 - y2 - y3;
//     if(input % 2 == 0)            
//     cout << input / 2 ;
//     else
//     cout << (input + 1) / 2 ;
//     return 0;
// }


//错误示例
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin >> m >> n ;
//     int total = 0;
//     for(int i = m; i <= n; i++)
//     {
//         if(i % 3 == 2)//没有看清楚题目要求是三个条件同时成立
//         {
//             cout << i ;
//             total++;
//         }
//         if(i % 5 == 3)
//         {
//             cout << i;
//             total++;
//         }
//         if(i % 7 == 4)
//         {
//             cout << i;
//             total++;
//         }  
//         if(total++ )
//         cout << " " ;//这样末尾会多出一个空格
//     }
//     cout << "total" << "=" << total ;
//     return 0;
// }
//  正确示例
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin >> m >> n;
//     int total = 0;
//     // 先遍历，符合条件先输出，控制空格
//     for(int i = m; i <= n; i++)
//     {
//         // 三个条件【同时成立】
//         if(i%3 == 2 && i%5 ==3 && i%7 ==4)
//         {
//             if(total > 0)//if语句和cout << i;以及total++;的位置的先后，加上if判断条件的巧妙，公共达成了目的
//             {
//                 cout << " "; // 不是第一个数，前面打印空格
//             }
//             cout << i;
//             total++;
//         }
//     }
//     // 只有存在数字，才换行（如果total=0，不输出第一行）
//     if(total > 0)
//         cout << endl;
//     cout << "total=" << total << endl;
//     return 0;
// }

// 错误示例
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     double sum = 100.0;
//     double s = 100.0;
//     double h = 0.0;
//     for(int i = 2; i <= n; i++)
//     {       
//         if(n == 1)
//         {
//             h = 50.0;
//             cout << s << " " << h ;
//             break;
//         }
//         s += sum;
//         h = sum / 2.0;
//         sum = h;
//     }
//     cout << s << " " << h ;//cout无法满足输出足够的0（%lf）
//     return 0;
// }
// 正确示例
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     double sum = 100.0;
//     double s = 100.0;
//     double h = 50.0;
//     if(n == 1)
//     {
//         printf("%lf %lf", s, h);
//         return  0;
//     }
//     for(int i = 2; i <= n; i++)//这里的sum也可以用h来代替s += 2.0 * h;   h /= 2.0; 并且去掉对sum的无用定义
//     {       
//         s += sum;
//         h /= 2.0;
//         sum = 2.0 * h;
//     }
//     printf("%lf %lf", s, h);
//     return 0;
// }


//错误示例
// #include<iostream>
// using namespace std;
// int power(int x, int y)//没有判断负数
// {
//     double num;
//     num = (y - 2 * x) / 2.0;
//     double a = num;
//     if(num / 1 == a)
//     return num;
//     return 0;
// }
// int main(){
//     int m, n;
//     cin >> m >> n ;    
//     if(power(m,n) != 0)
//     {
//         int num = m - power(m,n);
//         cout << power(m,n) << " " << num ;
//     }
//     else 
//         cout << "Error" ;
//     return 0;
// }
//正确示例
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int rabbit = (n - 2 * m) / 2;
//     int chicken = m - rabbit;
//     // 全部条件同时成立
//     if (n % 2 == 0 && rabbit >= 0 && chicken >= 0 && (2*m <= n && n <=4*m))
//     //脚的数量为偶数，兔子数>=0，鸡数>=0,脚的数以全是鸡和全是兔取到极限值
//     {
//         cout << chicken << " " << rabbit;
//     }
//     else
//     {
//         cout << "Error";
//     }
//     return 0;
// }

// 错误示例
// #include<iostream>
// using namespace std;
// int zs(int x)
// {
//     for(int i = 0; ;i++)//死循环
//     {
//         int num = x % 10;
//         x /= 10;
//         num = x;//直接覆盖num，白算了
//         if(num == 5)
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     for(int i = m; i <= n; i++)
//     {
        
//         if(zs(i) == 1 && i % 3 == 0)
//         {
//             int count = 1;//每次进入循环都会重置变量
//             if(count != 1)
//                 cout << " " ;
//             cout << i ;
//             count++;
//         }
//         else
//         cout << "No exist" ;//有一个数字不满足上述条件就会输出
//     }
//     return 0;
// }
// 正确示例
// #include<iostream>
// using namespace std;
// int zs(int x)
// {
//     while(x > 0)
//     {
//         int num = x % 10;
//         x /= 10;
//         if(num == 5)
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int count = 0;
//     for(int i = m; i <= n; i++)
//     {
//         if(zs(i) == 1 && i % 3 == 0)
//         {
//             if(count != 0)
//                 cout << " " ;
//             cout << i ;
//             count++;
//         }
//     }
//     if(count == 0)
//       	cout << "No exist" ;
//     return 0;
// }


//错误示例
// #include<iostream>
// #include<math.h>
// using namespace std;
// int sx(int x)//函数过于复杂，循环嵌套混乱
// {
//     int sum = x * x;//有可能会超出int范围
//     int rem = 0;
//     int c = sum;
//     for(int i = 0; i <= 3; i++)//没有算出x有几位就固定循环3次，判断截取位数错误（i < x的位数）
//     {
//         rem = sum % 10;//求每一位对应数字
//         sum = (sum - rem) / 10;
//         while(1)
//         {
//             int b = pow(10,i + 1);//使用pow浮点运算，容易出错
//             int a = c % b;
//             if(a == x)
//                 return 1;
//             else
//                 break;
//         }
//     }
//     return 0;
// }
// int main(){
//     int m, n;
//     cin >> m >> n ;
//     int count = 0;
//     for(int i = m; i <= n; i++)
//     {
//         if(count != 0)//该语句放在if(sx(i) == 1)外面，导致可能会多打印出很多空格
//         cout << " ";
//         if(sx(i) == 1)
//         cout << i;
//         count++;
//     }
//     if(count == 0)
//     cout << "No exist";
//     return 0;
// }
//正确示例
// #include<iostream>
// using namespace std;
// int sx(int x)
// {
//     long long square = (long long)x * x; // 防止溢出，用long long存平方
//     long long mod = 1;
//     // 算出x有几位，mod=10^位数
//     int tmp = x;
//     while(tmp > 0)
//     {
//         mod *= 10;
//         tmp /= 10;
//     }
//     long long last = square % mod; // 取平方的最后对应位数
//     if(last == x)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int count = 0;
//     for(int i = m; i <= n; i++)
//     {
//         if(sx(i) == 1)
//         {
//             if(count != 0)
//                 cout << " ";
//             cout << i;
//             count++;
//         }
//     }
//     if(count == 0)
//     {
//         cout << "No exist";
//     }
//     return 0;
// }



// #include <stdio.h>
// typedef long long ll;
// typedef __int128 lll;
// static lll gcd128(lll a, lll b) {
//     if (a < 0) a = -a;
//     if (b < 0) b = -b;
//     while (b) { lll t = a % b; a = b; b = t; }//辗转相除法
//     return a;
// }
// static void print128(lll x) {
//     if (x == 0) { putchar('0'); return; }//putchar——输出单个字符
//     if (x < 0) { putchar('-'); x = -x; }
//     char buf[50]; int p = 0;
//     while (x) { buf[p++] = (char)('0' + (int)(x % 10)); x /= 10; }//取最低位数字，存成字符（倒叙存入字符）；去掉最低位
//     while (p) putchar(buf[--p]);//--p——倒序输出数组buf里存储的数值
// }
// int main(void) {
//     int N;
//     if (scanf("%d", &N) != 1) return 0;
//     lll num = 0, den = 1;                 
//     for (int i = 0; i < N; i++) {
//         ll a, b;
//         if (scanf("%lld/%lld", &a, &b) != 2) break;//保证成功读取并且赋值两个变量（a,b）
//         lll aa = a, bb = b;//转换a,b类型（long long>>__int128）
//         lll g   = gcd128(den, bb);
//         lll lcm = den / g * bb;//求出den和bb的最小公倍数
//         num = num * (lcm / den) + aa * (lcm / bb);//求新分子（当前分母 den 放大到 lcm 需要的倍数）
//         den = lcm;//更新分母，使得新分母还是lcm
//         lll g2 = gcd128(num, den);        
//         if (g2) { num /= g2; den /= g2; }
//     }
//     lll integer = num / den;              
//     lll frac    = num % den;              
//     if (integer != 0) {
//         print128(integer);
//         if (frac != 0) putchar(' ');
//     }
//     if (frac != 0) {
//         print128(frac);
//         putchar('/');
//         print128(den);
//     }
//     if (integer == 0 && frac == 0) putchar('0');
//     putchar('\n');
//     return 0;
// }



//进阶
// #include <stdio.h>
// int main(void)
// {
//     long long n;
//     int d[20], i = 0;
//     const char *py[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//     if (scanf("%lld", &n) != 1) return 0;
//     if (n < 0) { printf("fu "); n = -n; }   /* 直接带空格，省掉 first */
//     if (n == 0) { printf("ling"); return 0; }
//     for (; n; n /= 10) d[i++] = (int)(n % 10);//n 等价于 n != 0
//     while (i--) {
//         printf("%s", py[d[i]]);//先用 d[i] 取出一个数字，再拿这个数字去访问 py 数组
//         if (i) putchar(' ');
//     }
//     return 0;
// }
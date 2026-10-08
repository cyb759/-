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

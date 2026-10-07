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

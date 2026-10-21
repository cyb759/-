//黑洞数（105）
// #include <stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     for (int step = 1; ; step++)
//     {
//         //三位数字从大到小排列存储
//         int d[3] = {n / 100, n / 10 % 10, n % 10};

//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = i + 1; j < 3; j++)
//             {
//                 if (d[i] < d[j])
//                 {
//                     int t = d[i];
//                     d[i] = d[j];
//                     d[j] = t;
//                 }
//             }
//         }

//         int max = d[0] * 100 + d[1] * 10 + d[2];
//         int min = d[2] * 100 + d[1] * 10 + d[0];
//         int diff = max - min;

//         printf("%d: %d - %d = %d\n", step, max, min, diff);

//         if (diff == 495)
//             break;

//         n = diff;
//     }

//     return 0;
// }




//1~n编号，鲍叔依次出圈
// #include <stdio.h>

// int main(void)
// {
//     int n, m, s;
//     int alive[101] = {0};

//     scanf("%d %d %d", &n, &m, &s);

//     for (int i = 1; i <= n; i++)
//         alive[i] = 1;

//     int cur = s;

//     for (int left = n; left > 0; left--)
//     {
//         int cnt = 0;

//         while (1)
//         {
//             if (alive[cur])
//             {
//                 cnt++;
//                 if (cnt == m)
//                     break;
//             }
//             cur = cur % n + 1;
//         }

//         printf("%3d", cur);
//         alive[cur] = 0;
//         cur = cur % n + 1;
//     }

//     return 0;
// }
//简便方式
// #include <stdio.h>

// int main(void)
// {
//     int n, m, s;
//     int a[101];                    // a 中只保存当前还在圈内的人，并按圆圈顺序排列

//     scanf("%d %d %d", &n, &m, &s);

//     for (int i = 0; i < n; i++)    // 数组下标从 0 开始
//         a[i] = i + 1;              // a[0]=1, a[1]=2, ..., a[n-1]=n

//     int idx = s - 1;               // 编号 s 的人在数组中的下标是 s-1

//     for (int left = n; left > 0; left--) // left 表示当前圈内还有多少人
//     {
//         idx = (idx + m - 1) % left; // 从 idx 开始报 1，第 m 个人在 idx+m-1 的位置

//         printf("%3d", a[idx]);      // 输出出圈人的编号

//         for (int i = idx; i < left - 1; i++) // 把后面的元素依次前移，相当于删除 a[idx]
//             a[i] = a[i + 1];

//         // idx 不需要手动调整：
//         // 删除后，下一个人会补到 idx 位置；如果删除的是最后一个，下一轮取模会自动回到下标 0
//     }

//     return 0;
// }
// // 关键公式：
// // idx = (idx + m - 1) % left;
// // 从 idx 开始报数 1，那么报数 m 的人就是 idx + m - 1。因为数组当前只有 left 个人，所以用 % left 让下标绕回 0 ~ left-1，防止越界


//难 108
// #include <stdio.h>

// #define MAXN 20

// static int contains(const int arr[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//         if (arr[i] == x)
//             return 1;
//     return 0;
// }

// int main(void)
// {
//     int n1, n2;
//     int a[MAXN], b[MAXN];

//     if (scanf("%d", &n1) != 1)
//         return 0;
//     for (int i = 0; i < n1; i++)
//         scanf("%d", &a[i]);

//     if (scanf("%d", &n2) != 1)
//         return 0;
//     for (int i = 0; i < n2; i++)
//         scanf("%d", &b[i]);

//     int printed = 0;   /* 已输出个数：控制空格，也参与去重 */

//     /* A 有、B 没有 */
//     for (int i = 0; i < n1; i++) {
//         if (!contains(b, n2, a[i]) && !contains(a, i, a[i]))
//             printf(printed++ ? " %d" : "%d", a[i]);
//     }

//     /* B 有、A 没有 */
//     for (int i = 0; i < n2; i++) {
//         if (!contains(a, n1, b[i]) && !contains(b, i, b[i]))
//             printf(printed++ ? " %d" : "%d", b[i]);
//     }

//     putchar('\n');
//     return 0;
// }


//循环数组连续4个数的和的最大值 109
// #include <stdio.h>

// int main(void)
// {
//     int n, arr[1000];

//     if (scanf("%d", &n) != 1)
//         return 0;
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     int sum = arr[0] + arr[1] + arr[2] + arr[3];
//     int bestSum = sum, bestPos = 1;

//     for (int s = 1; s < n; s++) 
//     {
//         sum -= arr[s - 1];          
//         sum += arr[(s + 3) % n];   
//         if (sum > bestSum) {
//             bestSum = sum;
//             bestPos = s + 1;
//         }
//     }

//     printf("%d %d\n", bestSum, bestPos);
//     return 0;
// }


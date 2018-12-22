// [P1046 陶陶摘苹果] https://www.luogu.org/problemnew/show/P1046
#include <iostream>
using namespace std;
int main()
{
    int a[12];     // 10 个苹果的高度
    int height;    // 陶陶的高度
    int sum;       // 陶陶能摘到苹果的数量
    for (int i = 0; i < 10; i++) // 循环 10 次
    {
        cin >> a[i]; // 输入十个苹果的高度
    }
    cin >> height;   // 输入陶陶的高度

    height+=30;    // 陶陶这么矮，就当他随时都拿了板凳吧。

    for (int i = 0; i < 10; i++)
    {
        if (height >= a[i])   // 如果陶陶能达到苹果的高度，那就累加器++
        {
            sum++;
        }
    }
    cout << sum << endl;   // 输出陶陶能摘到苹果的数量
    return 0;   // 和程序说再见
}
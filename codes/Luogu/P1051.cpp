// [P1051 谁拿了最多奖学金] https://www.luogu.org/problemnew/show/P1051
#include <algorithm>
#include <iostream>
using namespace std;
struct student {
    string name; // 学生姓名
    short pinjun; // 期末平均成绩，事实上是pingjun。。。。。。
    short pingyi; // 班级评议成绩
    char isGanbu; // 是否是学生干部
    char westStu; // 是否是西部学生
    short lunwen; // 发表论文数

    int i; // 第 i 个学生
    int getMoney; // 获得的奖学金
}; // 不要忘了 struct 结尾要有分号哦~
int main()
{
    int n; // 学生总数
    int getMoneySum = 0; // 学生们获得的奖学金总数
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++) // 分别输入每个学生的信息
    {
        cin >> a[i].name >> a[i].pinjun >> a[i].pingyi >> a[i].isGanbu >> a[i].westStu >> a[i].lunwen;
        a[i].i = i;
        a[i].getMoney = 0; // 为了安全起见，还是初始化则个吧
        if (a[i].pinjun > 80 && a[i].lunwen >= 1) // 院士奖学金
        {
            a[i].getMoney += 8000;
        }
        if (a[i].pinjun > 85 && a[i].pingyi > 80) // 五四奖学金
        {
            a[i].getMoney += 4000;
        }
        if (a[i].pinjun > 90) // 成绩优秀奖
        {
            a[i].getMoney += 2000;
        }
        if (a[i].pinjun > 85 && a[i].westStu == 'Y') // 西部奖学金
        {
            a[i].getMoney += 1000;
        }
        if (a[i].pingyi > 80 && a[i].isGanbu == 'Y') // 班级贡献奖
        {
            a[i].getMoney += 850;
        }
        getMoneySum += a[i].getMoney;
    }

    int maxx = 0;
    for (int i = 1; i < n; i++) // 求出获得最多奖学金的学生
    {
        if (a[i].getMoney > a[maxx].getMoney)
            maxx = i;
    }

    cout << a[maxx].name << endl
         << a[maxx].getMoney << endl
         << getMoneySum << endl;

    return 0; // 和程序说再见
}
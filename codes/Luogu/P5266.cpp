// [P5266 【深基17.例6】学籍管理] https://www.luogu.com.cn/problem/P5266

#include <iostream>
#include <map>

using namespace std;

map<string, int> m;

int main()
{
    int pnum = 0; // people num
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t, score;
        string name;
        cin >> t;

        if (t == 1) // 插入与修改
        {
            cin >> name >> score;

            if (m[name] == 0) {
                pnum++;
            }
            m[name] = score;
            cout << "OK\n";
        } else if (t == 2) { // 查询
            cin >> name;

            if (m[name] == 0) {
                cout << "Not found\n";
            } else {
                cout << m[name] << endl;
            }
        } else if (t == 3) { // 删除
            cin >> name;

            if (m[name] == 0) {
                cout << "Not found\n";
            } else {
                m[name] = 0;
                cout << "Deleted successfully\n";
                pnum--;
            }
        } else { // 汇总
            cout << pnum << endl;
        }
    }
    return 0;
}
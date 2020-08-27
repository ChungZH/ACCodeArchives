// [P1328 生活大爆炸版石头剪刀布] https://www.luogu.org/problem/P1328
#include <algorithm>
#include <iostream>

using namespace std;

const int table[5][5] = {
    { 0, 0, 1, 1, 0 },
    { 1, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 1 },
    { 0, 0, 1, 0, 1 },
    { 1, 1, 0, 0, 0 }
};

int main()
{
    int n;
    cin >> n;

    int acycle, bcycle;
    cin >> acycle >> bcycle;

    int a[acycle], b[bcycle];
    for (int i = 0; i < acycle; i++)
        cin >> a[i];
    for (int i = 0; i < bcycle; i++)
        cin >> b[i];

    int asco = 0, bsco = 0;
    for (int i = 0; i < n; i++) {
        asco += table[a[i % acycle]][b[i % bcycle]];
        bsco += table[b[i % bcycle]][a[i % acycle]];
    }

    cout << asco << ' ' << bsco << '\n';

    return 0;
}
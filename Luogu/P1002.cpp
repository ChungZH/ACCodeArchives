// [P1002 过河卒] https://www.luogu.com.cn/problem/P1002
using namespace std;
long long a[21][21];
bool m[23][23];
const int dx[9] = {0,-2,-1,1,2,2,1,-1,-2};
const int dy[9] = {0,1,2,2,1,-1,-2,-2,-1};
int main()
{
    int bx, by, hx, hy;
    cin >> bx >> by >> hx >> hy;

    for (int i = 0; i < 9; i++)
    {
        if (hx+dx[i] >= 0 && hx+dx[i] <= bx && hy+dy[i] >= 0 && hy+dy[i] <= by)
            m[hx+dx[i]][hy+dy[i]] = 1;
    }


    a[0][0] = 1;
    for (int i = 0; i <= bx; i++)
    {
        for (int j = 0; j <= by; j++)
        {
            if (i > 0) a[i][j] += a[i-1][j];
            if (j > 0) a[i][j] += a[i][j-1];
            if (m[i][j]) a[i][j] = 0;
        }
    }

    cout << a[bx][by] << endl;
    return 0;
}
// [AT1009 けんしょう先生のお菓子配り] https://www.luogu.org/problemnew/show/AT1009
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    
    int k = ceil((double)a / b) * b;
    
    cout << k-a << endl;
    return 0;
}

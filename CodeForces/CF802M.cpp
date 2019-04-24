// [CF802M April Fools' Problem (easy)] https://www.luogu.org/fe/problem/CF802M
#include <iostream>
#include <algorithm>

int main()
{
    int n, k, sum = 0;
    
    std::cin >> n >> k;
    
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    std::sort(a, a+n);
    
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}

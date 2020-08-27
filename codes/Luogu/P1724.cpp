// [P1724 东风谷早苗] https://www.luogu.org/problemnew/show/P1724
#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;

    long long T;
    std::cin >> T;

    long long x, y, tx, ty;
    x = y = tx = ty = 0;

    if (T < s.length()) {
        for (int i = 0; i < T; i++) {
            switch (s[i]) {
            case 'E':
                x++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
            case 'N':
                y++;
                break;
            default:
                break;
            }
        }

        std::cout << x << y << std::endl;
    } else {
        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
            case 'E':
                tx++;
                break;
            case 'S':
                ty--;
                break;
            case 'W':
                tx--;
                break;
            case 'N':
                ty++;
                break;
            default:
                break;
            }
        }

        int temp = T / s.length();

        x += temp * tx;
        y += temp * ty;

        if (T % s.length() != 0) {
            for (int i = 0; i < T % s.length(); i++) {
                switch (s[i]) {
                case 'E':
                    x++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'W':
                    x--;
                    break;
                case 'N':
                    y++;
                    break;
                default:
                    break;
                }
            }
        }

        std::cout << x << " " << y << std::endl;
    }

    return 0;
}

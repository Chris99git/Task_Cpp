#include <iostream>
using namespace std;
int main()
{
    int r, a, b, c, d, e, f, g, h, i, k, l, m, p, day, month;
    cin >> r;
    a = r % 19;
    b = r / 100;
    c = r % 100;
    d = b / 4;
    e = b % 4;
    f = ((b + 8) / 25);
    g = ((b - f + 1) / 3);
    h = ((19 * a + b - d - g + 15) % 30);
    i = c / 4;
    k = c % 4;
    l = ((32 + 2 * e + 2 * i - h - k) % 7);
    m = ((a + 11 * h + 22 * l) / 451);
    p = ((h + l - 7 * m + 114) % 31);
    day = p + 1;
    month = (h + l - 7 * m + 114) / 31;
    cout << day << " " << month;
    return 0;
}

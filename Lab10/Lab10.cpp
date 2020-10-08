#include <iostream>
using namespace std;

int main()
{
    //1
    int a, b, c;
    bool s=0;
    cin >> a >> b;
    if (a>2 && b<=3)
    {
        s = 1;
    }
    cout << s << endl;

    //2
    s = 0;
    cin >> a >> b >> c;
    if (a<b && b<c)
    {
        s = 1;
    }
    cout << s << endl;

    //3
    s = 0;
    cin >> a;
    if (a > 9 && a < 100 && a % 2 == 0)
    {
        s = 1;
    }
    cout << s << endl;

    //4
    s = 0;
    cin >> a;
    if ((a / 100 < (a / 10 - a / 100 * 10) && (a / 10 - a / 100 * 10) < a % 10) || (a / 100 > (a / 10 - a / 100 * 10) && (a / 10 - a / 100 * 10) > a % 10))
    {
        s = 1;
    }
    cout << s << endl;

    //5
    s = 0;
    cin >> a;
    if (a/1000==a%10 && (a/10-a/100*10)==(a/100-a/1000*10))
    {
        s = 1;
    }
    cout << s << endl;

    //6
    s = 0;
    cin >> a >> b >> c;
    if (a^2==b^2+c^2 || b^2==a^2+c^2 || c^2==a^2+b^2)
    {
        s = 1;
    }
    cout << s << endl;

    //7
    s = 0;
    cin >> a >> b >> c;
    if (a<b+c && b<a+c && c<a+b)
    {
        s = 1;
    }
    cout << s << endl;
}
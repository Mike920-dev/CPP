#include <iostream>
using namespace std;

int silnia(int n) {
    int w = 1;

    if (n >= 0)
    {
        w = 1;
        while (n >= 2)
        {
            w *= n;
            n -= 1;
        }
        return w;
    }
    return -1;

}

int main()
{
    int w = 1;
    int n;

    cout << "Podaj liczbe, z ktorej chcesz obliczyc silnie: " << endl;
    cin >> n;

    cout << silnia(n);

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;

    cin >> a >> b;

    cout << "a = " + to_string(a) << "\n"
        << "b = " + to_string(b);

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    string str, res = "";

    cin >> str >> a;
    
    for (int i = 0; i < a; i++){
        res += str;
    }

    cout << res;

    return 0;
}
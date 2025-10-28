#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++){
        if (isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else {
            str[i] = toupper(str[i]);
        }
    }

    cout << str;

    return 0;
}
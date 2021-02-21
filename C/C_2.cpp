#include <iostream>

using namespace std;
bool check (string str)
{
    int i=0, j=str.size()-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    if(check(str)) cout << "Yes";
    else cout << "No";
    return 0;
}

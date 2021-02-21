#include <iostream>
#include <vector>
using namespace std;
bool check(int n)
{
    vector <int> myvt;
    while(n>0)
    {
        int x = n%10;
        myvt.push_back(x);
        n/=10;
    }
    int i=0, j = myvt.size() - 1;
    while(i<j)
    {
        if(myvt[i]!=myvt[j]) return false;
        i++;
        j--;
    }
    return true;
}
void solve (int A, int B)
{
    int count = 0;
    for(int i=A; i<=B; i++)
    {
        if(check(i)) count ++;
    }
    cout << count << endl;
    return;
}

int main()
{
   int T;
   cin >> T;
   for(int i=1; i<=T; i++)
   {
       int A, B;
       cin >> A >> B;
       solve(A,B);
   }
   return 0;
}

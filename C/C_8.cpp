#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int T[N];
    for(int i=0; i<N; i++)
    {
        cin >> T[i];
    }
    sort(T,T+N);
    long int sum = 0;
    for(int i=0; i<N; i++)
    {
        sum += T[i]*(N-i);
    }
    cout << sum;
    return 0;
}

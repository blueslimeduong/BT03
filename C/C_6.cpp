#include <iostream>
#include <cstring>
using namespace std;

void generateSquare(int n)
{
    int Square[n][n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) Square[i][j]=0;
    int i=0, j=n/2;
    int num=1;
    while(num<=n*n)
    {

        if(j==n) j = 0;
        if(i<0) i = n-1;

        if(Square[i][j])
        {
            j--;
            i+=2;
            if(j<0) j = n-1;
            if(i>=n) i = i-n;
            continue;
        }
        Square[i][j] = num++;
        j++;
        i--;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << Square[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    generateSquare(n);
    return 0;
}

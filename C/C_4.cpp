#include <iostream>

using namespace std;

int main()
{
    char arr[10][10];
    int m, n;
    cin >> m >> n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

          if(arr[i][j]=='*')
          {
              cout << '*' << ' ';
          }
          else
          {
              int dem = 0;
              for(int l=i-1; l<i+2; l++)
              {
                  if(l<0) continue;
                  if(l>m) break;
                  for(int k=j-1; k<j+2; k++)
                  {
                      if(k<0) continue;
                      if(k>n) break;
                      if(arr[l][k]=='*') dem++;
                  }
              }
              cout << dem << ' ';
          }

        }
        cout << endl;
    }
}

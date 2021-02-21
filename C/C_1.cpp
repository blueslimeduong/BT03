#include <iostream>
using namespace std;
bool check(int *arr, int N)
{
    bool seen[10000]={false};
    for(int i=0;i<N;i++)
    {
        if (seen[arr[i]+1]== true)
        {
            return true;
        }
        seen[arr[i]+1]=true;
    }
    return false;

}
int main()
{
    int N;
    cin >> N;
    int arr[10000];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    if(check(arr,N))
    {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}

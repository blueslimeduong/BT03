#include <iostream>
using namespace std;
int main()
{
    int x, y, Square[10][10];
    cin >> x >> y;
    int value = 1;
    int hang = x, cot = y;
    int p = 0;
    while(value<=x*y)
    {
        for(int i=p; i<cot; i++)
        {
            Square[p][i] = value++;
        }
        for(int i=p+1; i<hang; i++)
        {
            Square[i][cot-1] = value++;
        }
        if ( p != hang-1)
        {
            for(int i=cot-2; i>=p; i--)
            {
                Square[hang-1][i] = value++;
            }
        }
        if(p!=cot-1)
        {
            for(int i=hang-2; i>p; i--)
            {
                Square[i][p] = value ++;
            }
        }
        p++;
        cot--;
        hang--;
    }
    for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++)
			cout << Square[i][j] << " ";
		cout << endl;
	}
    return 0;
}

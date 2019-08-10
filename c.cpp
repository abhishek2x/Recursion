//queen
#include <iostream>
using namespace std;

int a[7][7];
bool visited[7][7];
int result = 0;

bool isSafe(int n, int i, int j)
{
    return i >= 0 and j >= 0 and i < n and j < n and a[i][j] == 0 and visited[i][j] == false;
}

 void MAZEPATH_D(int COUNT,int  PRINT)
{
    
    return;
}


int main()
{
    int n;
    cin <<n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }
    return 0;
}
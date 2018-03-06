#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    int a;
    cin >> N;
    int mas[N];
    for(int i = 0;i < N;i++)
    {
        cin >> mas[i]; 
    }
    for(int d = 3;d < N;d++)
    {
        mas[d - 1] = mas [d];
    }
    for(int f = 0;f < N-1;f++)
    {
        cout << mas[f];
    }
}




#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    int a = 0;
    cin >> N;
    int mas[N];
    for(int i = 0;i < N-1;i++)
    {
        cin >> mas[i]; 
    }
    a = mas[N-1];
    for(int d = 3;d > N-1;d--)
    {
        mas[d] = mas [d - 1];
    }
    mas[3] = 6;
    mas[N] = a;
    for(int f = 0;f < N-1;f++)
    {
        cout << mas[f];
    }
}
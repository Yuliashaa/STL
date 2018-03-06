#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  int i;
  int a[n];
  cout << "Enter your array: " << endl;
  for(i = 0; i < n; i ++)
  {
    cin >> a[i];
  }
  int max, min;
  max = a[1];
  min = a[1];
  for(i = 0; i < n; i++)
  {
    if(a[i] > max)
    {
      max = a[i];
    }
    if(a[i] < min)
    {
      min = a[i];
    }
  }
  cout << "Your array min: " << " " << min << endl;
  cout << "Your array max: " << " " << max << endl;;
}

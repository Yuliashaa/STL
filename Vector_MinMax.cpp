#include <vector>
#include <iostream>
using namespace std;
int main(){
  cout << "Enter number: ";
  int n;
  cin >> n;
  vector<int> arr(n);
  int i;
  int max, min;
  cout << "Enter your array: " << endl;
  for(i = 0; i < n; i ++)
  {
    cin >> arr[i];
  }
  min = arr[0];
  max = arr[0];
  for(i = 0; i < n; i++)
  {
    if(arr[i] < min)
    {
      min = arr[i];
    }
    if(arr[i] > max)
    {
      max = arr[i];
    }
  }
  cout << "Maximum is: " << " " << max << endl;
  cout << "Minimum is: " << " " << min << endl;
}

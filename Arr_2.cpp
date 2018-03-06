#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
  int arr[10];
  int num, change;
  
  for(int i=0;i<10;i++){
    arr[i] = rand()%20;
  }
  cout << endl;
   cout << "Твой arr  " << endl;
  for(int i=0;i<10;i++){
   cout << arr[i] << " ";
  }
  cout << "Введите рандомное порядковое число = ";
  cin >> num;
  cout << "Введите рандомное число на замену = ";
  cin >> change;
  arr[num] = change;
  cout << endl;
  cout << "Твой arr  " << endl;
  for(int i=0;i<10;i++){
   cout << arr[i] << " ";
  }
}
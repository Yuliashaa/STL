#include <iostream>
#include <vector>
using namespace std;

int main() {
  int num, unique_var,max;
  cin >> num;
  vector <int> LovelyVector;
  LovelyVector.reserve(num);
  for(int i =0; i< num; i++){
    cout << "Введите " << i << " элементов" << endl;
    cin >> LovelyVector[i];
  }
  cout << "Вот твой вектор" << endl;
  for(int i=0;i<num;i++){
    cout << LovelyVector[i] << " ";
  }
  for(int i =0; i< num;i++){
  unique_var += LovelyVector[i];
}
cout << endl;
cout << "unique_var = " << unique_var;

max = 0;
for(int i =0;i < num;i++){
  if(max < LovelyVector[i]){
    max = LovelyVector[i];
  }
}
cout << endl;
cout << "Max num = " << max;
}

#include <iostream>
#include <list>
#include <iterator>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  list<int> myList;
  
  for(int i =0;i<15;i++){
    myList.push_back(rand()%20);
  }
  cout << endl;
  cout << "Yours list : ";
  copy(myList.begin(),myList.end(),ostream_iterator<int>(cout," "));
  cout << endl;
  myList.sort();
  cout << "Sorted list: ";
  copy(myList.begin(),myList.end(),ostream_iterator<int>(cout," "));
}
#include <iostream>
using namespace std;

int main(void) {
  int rows;
  cin >> rows;

  int i = 0;

  while (i < rows) {

    int j = 0;

    int count = i;
    while (j < i) {
      cout << count;
      count++;
    }
    i++;
    cout << endl;
  }

  return 0;
}

#include <iostream>

using namespace std;

void inserting_sort (int *data, int start, int end) {
  for (int i = start + 1; i <= end; i++) {
    int temp = data[i];
    int marker = -1;
    
    for (int j = start; j < i; j++)
      if (data[j] > temp) {
        marker = j;
        break;
      }

    if (marker != -1)
      for (int k = i; k >= marker; k--)
        data[k] = data[k - 1];
    data[marker] = temp;
  }
}

int main() {
  int N;
  cin >> N;
  int data[N];
  for (int i = 0; i < N; i++)
    cin >> data[i];

  inserting_sort (data, 0, N - 1);

  for (int i = 0; i < N; i++) cout << data[i] << ' ';

  return 0;
}

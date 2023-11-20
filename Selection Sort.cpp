#include <iostream>

using namespace std;

void selection_sort (int *data, int start, int end) {
  if (start >= end) return;
  int pivot = start;
  int min = start;

  for (int i = start + 1; i <= end; i++) {
    if (data[i] < data[min]) min = i;
  }

  int temp = data[pivot];
  data[pivot] = data[min];
  data[min] = temp;

  selection_sort (data, start + 1, end);
}

int main() {
  int N;
  cin >> N;
  int data[N];
  for (int i = 0; i < N; i++)
    cin >> data[i];

  selection_sort (data, 0, N - 1);

  for (int i = 0; i < N; i++) cout << data[i] << ' ';

  return 0;
}

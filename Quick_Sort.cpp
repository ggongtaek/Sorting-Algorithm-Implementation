#include <iostream>

using namespace std;

void quick_sort (int *data, int start, int end) {
  if (start >= end) return;
  int pivot = start;
  int l = start + 1;
  int r = end;

  while (l <= r) {
    while (data[l] <= data[pivot])
      l++;
    while (data[r] >= data[pivot] && r > start)
      r--;
    if (l > r)
    {
      int temp = data[r];
      data[r] = data[pivot];
      data[pivot] = temp;
    } else {
      int temp = data[r];
      data[r] = data[l];
      data[l] = temp;
    }

    quick_sort (data, start, r - 1);
    quick_sort (data, r + 1, end);
  }
}

int main() {
  int N;
  cin >> N;
  int data[N];
  for (int i = 0; i < N; i++)
    cin >> data[i];
  
  quick_sort (data, 0, N - 1);

  for (int i = 0; i < N; i++) cout << data[i] << ' ';

  return 0;
}

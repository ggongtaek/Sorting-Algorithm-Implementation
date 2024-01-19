#include <iostream>

using namespace std;

void bubble_sort (int *data, int start, int end) {
  for (int i = start; i < end; i++)
  {
    if (data[i] > data[i + 1])
    {
      int temp = data[i];
      data[i] = data[i + 1];
      data[i + 1] = temp;
    }
  }
  if (start < end - 1)
    bubble_sort(data, start, end - 1);
}

int main() {
  int N;
  cin >> N;
  int data[N];
  for (int i = 0; i < N; i++)
    cin >> data[i];

  bubble_sort (data, 0, N - 1);

  for (int i = 0; i < N; i++) cout << data[i] << ' ';

  return 0;
}

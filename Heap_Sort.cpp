#include <iostream>

using namespace std;

void heap_sort (int *data, int N) {
  int ret[N + 1];
  for (int i = 0; i < N; i++)
  {
    ret[i + 1] = data[i];
    int pos = i + 1;
    while (ret[pos] > ret[pos / 2] && pos > 1)
    {
      int temp = ret[pos];
      ret[pos] = ret[pos / 2];
      ret[pos / 2] = temp;
      pos /= 2;
    }
  }
  for (int i = N - 1; i >= 0; i--)
  {
    data[i] = ret[1];
    ret[1] = ret[i + 1];
    int pos = 1;
    while ((pos * 2 <= i && ret[pos] < ret[pos * 2]) || (pos * 2 + 1 <= i && ret[pos] < ret[pos * 2 + 1]))
    {
      if (ret[pos * 2] > ret[pos * 2 + 1])
      {
        int temp = ret[pos];
        ret[pos] = ret[pos * 2];
        ret[pos * 2] = temp;
        pos *= 2;
      }
      else
      {
        int temp = ret[pos];
        ret[pos] = ret[pos * 2 + 1];
        ret[pos * 2 + 1] = temp;
        pos = pos * 2 + 1;
      }
      
    }
  }
}

int main() {
  int N;
  cin >> N;
  int data[N];
  for (int i = 0; i < N; i++)
    cin >> data[i];

  heap_sort (data, N);

  for (int i = 0; i < N; i++) cout << data[i] << ' ';

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int numberOfDays, const vector<int> &visitors) {
  int max = visitors[0], days = visitors[0] > visitors[1];
  for (int i = 0; i < numberOfDays-1; i++) {
    if (visitors[i] > max) {
      max = visitors[i];
      if (visitors[i] > visitors[i+1]) days++;
    }
  }
  return days + (visitors[numberOfDays-1] > max);
}

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc) {
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    cout << "Case #" << tc << ": " << NumberOfRecordBreakingDays(N, V) << endl;
  }
  return 0;
}

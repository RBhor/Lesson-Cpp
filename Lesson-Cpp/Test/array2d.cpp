#include <iostream>

using namespace std;

void print_array2d(int *A, int N, int M){
    for (int i = 0; i < N; i++){
      for (int j = 0; j < M; j++){
        cout << A[i*M + j] << "\t";      //cout << A[i][j] << "\t";
      }
      cout << "\n";
    }
}

int main ()
{
  int N, M;
  cin >> N >> M;

  int A[N*M];

  for (int i = 0; i < N; i++){
      for (int j = 0; j < M; j++){
	       A[i*M + j] = i * M + j;
      }
  }

  print_array2d(A, N, M);

  return 0;
}

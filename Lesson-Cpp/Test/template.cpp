#include <cstdio>

template<spacename T>
T abs(T x){
  if (x>0)
    return x;
  else
    return -x;
}

int main(){
  int x = -123;
  double y = -456.789;

  printf("%d\n", abs(x));
  printf("%s\n", abs(y));
}

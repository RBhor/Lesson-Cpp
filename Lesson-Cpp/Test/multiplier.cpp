#include<iostream>

int main(){
  int n;
  int d=2;

  std::cout<<"Enter number:"<<std::endl;
  std::cin>>n;
  std::cout<<"Multipliers: ";

  while (n!=1) {
      if ((n%d)==0){
          std::cout<<d<<"; ";
          n=n/d;
      }else{
          d++;
      };
  };

  return 0;
};

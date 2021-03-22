#include<iostream>
using namespace std;
//(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
int main() {
  int  a, b, c = 0;
  cin >> a;
  cin >> b;
  cout << (b % 10)*a<<endl;
  cout << ((b / 10) % 10)*a<<endl;
  cout << (((b / 10) / 10) % 10)*a<<endl;


  cout << a * b;

  return 0;
}
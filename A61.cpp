#include <iostream>
using namespace std;

int inputvalid(int b, int e);
void printPrime(int begin, int end);

int main() {
  int begin, end;
  int i, p;

  do {
    cout << "Enter your range [from, to] \n";
    cin >> begin >> end;
  } while (inputvalid(begin, end));
  // } while (begin >= end || begin < 2 || end < 0);  
  printPrime(begin, end);
}

int inputvalid(int num, int num2) {
  if ((num & num2 >= 0 && num > num2) || (num >num2))
    return 1;
  else
    return 0;
}
void printPrime(int begin, int end) {
  int p, i;
  for (p = begin; p <= end; p++) {
    if (p == 0 || p == 1)
      continue;
    //* for(i=2; i<p; i++)
    for (i = 2; i <= (p / 2); i++)
      if (p % i == 0)
        break;
    if (i > (p / 2))
      cout << " Prime number : " << p << endl;
  }
}
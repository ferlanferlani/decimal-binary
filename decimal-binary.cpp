// convert decimal to binary

#include <iostream>
#include <cmath>
using namespace std;

long long convert(int);

int main() {
  int n, bin;
  cout << "---------------------------------------";
  cout << "PROGRAM CONVERT ANGKA DESIMAL KE BINNER";
  cout << "---------------------------------------" <<endl;
  cout << "Masukkan Angka Desimal Anda : ";
  cin >> n;
  bin = convert(n);
  cout << "-----------------------------------------------" <<endl;
  cout << n << " Dalam Desimal = " << bin << " Dalam Biner" <<endl;
  cout << "-----------------------------------------------" <<endl;
  return 0;
}

long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}
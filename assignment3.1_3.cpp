#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive number: ";
  cin >> n;

/*Avoiding 0 and 1. Because they are not prime number*/
  if (n == 0 || n == 1) {
    is_prime = false;
  }

/* n/2 is for avoiding 2 and 3 before going "if". Because they are prime number*/
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
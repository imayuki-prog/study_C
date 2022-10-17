#include <iostream>
using namespace std;

int main() {
    
int i = 0, count = 50, result = 0;
    
  for (int i = 1; i <= count; i = i + 10) { //i=i+1 = i++
    cout << i << " ";
    result += i;
    
  }
  
  cout << "Total:" << result;
 
  return 0;
}
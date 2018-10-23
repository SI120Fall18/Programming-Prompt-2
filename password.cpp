#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
char ch(int x) {

if (x < 10) {
  return char(x+48);

} else if (x < 36) {
  return char(x + 55);

} else if (x < 62) {
  return char(x + 61);
}
 return '?';
}

int main() {
  srand(time(0));
  srand(rand());
  unsigned int amount;


  std::cout << "Enter the amount of characters that you want your password to be: ";
  std::cin >> amount;

if (amount > 0) {
  std::cout  << "Your new password is:";
  for (int x = 0; x < amount; x++){
   std::cout << ch(rand() % 62);
}
} else if (amount <= 0){
    std::cout << "The amount cannot be less than 0\n";
  }
  std::cout << std::endl;

  return 0;
}

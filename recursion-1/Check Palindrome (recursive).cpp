#include <cstring>
bool isPalindrome(char arr[], int firstIndex, int lastIndex) {
  // base case
  if (firstIndex > lastIndex) {
    return true;
  }
  // nth step
  if (arr[firstIndex] != arr[lastIndex]) {
    return false;
  }
  // hypothesis -> to reach nth step
  return isPalindrome(arr, firstIndex + 1, lastIndex - 1);
}
// size calculaate kar raha hai
bool checkPalindrome(char input[]) {
  // Write your code here
  int size = 0;
  size = strlen(input);
  return isPalindrome(input, 0, size - 1);
}


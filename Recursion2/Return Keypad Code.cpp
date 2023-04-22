#include <string.h>
#include <string>

using namespace std;
string smallstring(int num) {
  if (num == 0 || num == 1) {
    return "";
  } else if (num == 2) {
    return "abc";
  }

  else if (num == 3) {
    return "def";
  }

  else if (num == 4) {
    return "ghi";
  } else if (num == 5)
    return "jkl";
  else if (num == 6) {
    return "mno";
  } else if (num == 7)
    return "pqrs";
  else if (num == 8)
    return "tuv";
  else if (num == 9) {
    return "wxyz";
  }
  return "";
}
int keypad(int num, string output[]) {
  if (num == 0) {
    output[0] = "";
    return 1;
  }

  int smalloutput = keypad(num / 10, output);
  string help = smallstring(num % 10);

  int k = 0;
  string temp[smalloutput*help.length()];

  for (int i = 0; i < smalloutput; i++) {
    for (int j = 0; j < help.length(); j++) {
      temp[k] = output[i] + help[j];
      k++;
    }
  }

  for (int i = 0; i < k; i++) {
    output[i] = temp[i];
  }

  return smalloutput * help.length();
}

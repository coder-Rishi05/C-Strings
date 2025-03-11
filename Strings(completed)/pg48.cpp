//48. Write a C++ method to check whether a string is a valid password.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char password[10];
  int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;

  cout << "Enter password (min 8 characters): ";
  cin >> password;

  int minLength = 8; 

  if (strlen(password) < minLength) {
    cout << "Password is too short." << endl;
    return 1;
  }

  for (int i = 0; password[i] != '\0'; i++) {
    if (password[i] >= 'a' && password[i] <= 'z') {
      hasLower = 1;
    } else if (password[i] >= 'A' && password[i] <= 'Z') {
      hasUpper = 1;
    } else if (password[i] >= '0' && password[i] <= '9') {
      hasDigit = 1;
    } else if (password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '&') {
      hasSpecial = 1;
    }
  }

  if (!hasLower || !hasUpper || !hasDigit || !hasSpecial) {
    cout << "Password must contain lowercase, uppercase, digit and special character." << endl;
    return 1;
  }

  cout << "Password is valid." << endl;
  return 0;
}

/*
output :

Enter password (min 8 characters): ahshj7462
Password must contain lowercase, uppercase, digit and special character.

Enter password (min 8 characters): @123AbD
Password is too short.

Enter password (min 8 characters) : @1242AbHj
Password is valid.

*/
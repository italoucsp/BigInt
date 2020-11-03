#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

class BigInt {
private:
  vector<bool> bit_num;
  bool is_negative;

  static bool validate_number(string &strnumber, bool &sign);
public:
  BigInt();
  BigInt(string strnumber);
  static BigInt to_bint(string strnumber);
  void operator=(BigInt other);
  bool operator==(BigInt other);
  bool operator!=(BigInt other);
  bool operator>(BigInt other);
  bool operator<(BigInt other);
  bool operator>=(BigInt other);
  bool operator<=(BigInt other);
  BigInt operator+(BigInt other);
  BigInt operator-(BigInt other);
  BigInt operator*(BigInt other);
  BigInt operator/(BigInt other);
  BigInt operator%(BigInt other);
  BigInt& operator+=(BigInt other);
  BigInt& operator-=(BigInt other);
  BigInt& operator*=(BigInt other);
  BigInt& operator/=(BigInt other);
  BigInt& operator%=(BigInt other);
  BigInt& operator++();
  BigInt operator++(int);
  BigInt& operator--();
  BigInt operator--(int);
};

BigInt::BigInt() {

}

BigInt::BigInt(string strnumber) {
  bit_num = to_bint(strnumber).bit_num;
}

bool BigInt::validate_number(string &strnumber, bool &sign) {
  if (strnumber.length() <= 0)
    return false;
  if (strnumber[0] != '-' || ('0' > strnumber[0] || strnumber[0] > '9'))
    return false;
  else {
    sign = (strnumber[0] == '-') ? true : false;
    strnumber = strnumber.substr(sign, strnumber.length() - sign);
  }
  for (char &digit : strnumber) {
    if ('0' > digit || digit > '9')
      return false;
  }
  return true;
}

BigInt BigInt::to_bint(string strnumber) {
  BigInt new_bigInt;
  if (validate_number(strnumber, new_bigInt.is_negative)) {
    for (char &digit : strnumber) {

    }
  }
  return new_bigInt;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BigInt {
private:
  vector<bool> bit_num;
  bool is_negative;

  static bool validate_number(string &strnumber);
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

bool BigInt::validate_number(string &strnumber) {
  for (char &digit : strnumber) {

  }
  return true;
}

BigInt BigInt::to_bint(string strnumber) {
  if (validate_number(strnumber)) {
    BigInt new_bigInt;
    new_bigInt.is_negative = (strnumber[0] == '-') ? true : false;
    for (char &digit : strnumber) {

    }
  }
}
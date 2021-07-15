
#include <iostream>

int sum_of_two_digits(int first_digit, int second_digit) {
    return first_digit + second_digit;
}

int main() {
    int k = 0;
    int l = 0;
    std::cin >> k;
    std::cin >> l;
    std::cout << sum_of_two_digits(k, l);
    return 0;
}

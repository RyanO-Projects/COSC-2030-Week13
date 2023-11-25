#include <iostream>
#include <cstring>

// Recursive function to find the nth power of a number
int RecursivePowers(int num, int pow) {
    if(pow > 1) {
        return num * RecursivePowers(num, pow - 1);
    }
}

// Recursive function to sum all numbers from 0 to n;
int SumNum(int num) {
    if(num > 0) {
        return num += SumNum(num - 1);
    }
}

// Recursive Function to test for palindromes
bool Palindromes(const std::string str, int start, int end) {
    if(start >= end) {
        return true;
    }
    if(str[start] != str[end]) {
        return false;
    }

    return Palindromes(str, start + 1, end - 1);
}

int main() {
    int number = 14, power = 5;

    int total = RecursivePowers(number, power);
    std::cout << total << std::endl;

    total = SumNum(number);
    std::cout << total << std::endl;

    std::string input = "eooooe";
    int sizeString = input.size() - 1;
    if(Palindromes(input, 0, input.length() - 1)) {
        std::cout << "You entered a palindrome!";
    }
    else
        std::cout << "You did not enter a palindrome :(\n";
    return 0;
}
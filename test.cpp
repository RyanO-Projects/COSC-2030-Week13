using namespace std;
#include <vector>
#include <iostream>
int count(int, vector<int>, int); int main() { vector<int> numList = { 1, 2, 2, 3, 4, 4, 4, 5 }; cout << count(4, numList, 0) << endl; return 0; } int count(int digit, vector<int> v, int index) { if (index >= v.size()) { return 0; } else if (v[index] == digit) { return 1 + count(digit, v, index + 1); } else { return count(digit, v, index + 1); } }
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> v(10);
    std::iota(v.begin(), v.end(), 1); // Fill with 1..10
    std::reverse(v.begin(), v.end()); // Reverse to 10..1
    int sum = std::accumulate(v.begin(), v.end(), 0, [](int a, int b){ return a + (b % 2 ? b * b : b); });
    std::cout << "Sum of squares of odd numbers and even numbers as-is: " << sum << "\n";
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int elementToMove = 3;

    // T?m v? trí c?a ph?n t? c?n di chuy?n
    auto it = 2;//find(numbers.begin(), numbers.end(), elementToMove);

    if (it != numbers.end()) {
        // Di chuy?n ph?n t? này xu?ng cu?i vector
        numbers.erase(it);      // Xóa ph?n t? ? v? trí hi?n t?i
        numbers.push_back(elementToMove);  // Thêm ph?n t? vào cu?i vector
    }

    // In k?t qu?
    for (const int &number : numbers) {
        cout << number << " ";
    }
    
    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int elementToMove = 3;

    // T?m v? tr� c?a ph?n t? c?n di chuy?n
    auto it = 2;//find(numbers.begin(), numbers.end(), elementToMove);

    if (it != numbers.end()) {
        // Di chuy?n ph?n t? n�y xu?ng cu?i vector
        numbers.erase(it);      // X�a ph?n t? ? v? tr� hi?n t?i
        numbers.push_back(elementToMove);  // Th�m ph?n t? v�o cu?i vector
    }

    // In k?t qu?
    for (const int &number : numbers) {
        cout << number << " ";
    }
    
    return 0;
}


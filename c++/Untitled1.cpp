#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            std::cerr << "M?u s? kh�ng th? l� 0." << std::endl;
            exit(1);
        }
    }

    // Ph��ng th?c �? so s�nh ph�n s? v?i m?t ph�n s? kh�c
    int compare(const Fraction& other) const {
        int common_denominator = denominator * other.denominator;
        int new_num1 = numerator * other.denominator;
        int new_num2 = other.numerator * denominator;

        if (new_num1 < new_num2) {
            return -1; // ph�n s? hi?n t?i nh? h�n ph�n s? kh�c
        } else if (new_num1 > new_num2) {
            return 1; // ph�n s? hi?n t?i l?n h�n ph�n s? kh�c
        } else {
            return 0; // ph�n s? hi?n t?i b?ng ph�n s? kh�c
        }
    }
};

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 5);

    int comparisonResult = fraction1.compare(fraction2);

    if (comparisonResult < 0) {
        std::cout << fraction1.compare(fraction2) << " l� nh? h�n " << std::endl;
    } else if (comparisonResult > 0) {
        std::cout << fraction1.compare(fraction2) << " l� l?n h�n " << std::endl;
    } else {
        std::cout << fraction1.compare(fraction2) << " l� b?ng " << std::endl;
    }

    return 0;
}


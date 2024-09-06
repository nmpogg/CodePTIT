#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            std::cerr << "M?u s? không th? là 0." << std::endl;
            exit(1);
        }
    }

    // Phýõng th?c ð? so sánh phân s? v?i m?t phân s? khác
    int compare(const Fraction& other) const {
        int common_denominator = denominator * other.denominator;
        int new_num1 = numerator * other.denominator;
        int new_num2 = other.numerator * denominator;

        if (new_num1 < new_num2) {
            return -1; // phân s? hi?n t?i nh? hõn phân s? khác
        } else if (new_num1 > new_num2) {
            return 1; // phân s? hi?n t?i l?n hõn phân s? khác
        } else {
            return 0; // phân s? hi?n t?i b?ng phân s? khác
        }
    }
};

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 5);

    int comparisonResult = fraction1.compare(fraction2);

    if (comparisonResult < 0) {
        std::cout << fraction1.compare(fraction2) << " là nh? hõn " << std::endl;
    } else if (comparisonResult > 0) {
        std::cout << fraction1.compare(fraction2) << " là l?n hõn " << std::endl;
    } else {
        std::cout << fraction1.compare(fraction2) << " là b?ng " << std::endl;
    }

    return 0;
}


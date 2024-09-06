#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rectangle {
    int x1, y1, x2, y2;
};

int main() {
    int N;
    cin >> N;

    vector<Rectangle> rectangles(N);
    for (int i = 0; i < N; ++i) {
        cin >> rectangles[i].x1 >> rectangles[i].y1 >> rectangles[i].x2 >> rectangles[i].y2;
    }

    int totalArea = 0;
    for (int i = 0; i < N; ++i) {
        totalArea += (rectangles[i].x2 - rectangles[i].x1) * (rectangles[i].y1 - rectangles[i].y2);
    }

    cout << abs(totalArea) << endl;

    return 0;
}


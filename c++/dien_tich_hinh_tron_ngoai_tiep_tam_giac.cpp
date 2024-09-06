#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

struct diem {
    int x, y;
};

double check(diem A, diem B, diem C) {
    double AB = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    double BC = sqrt((B.x - C.x) * (B.x - C.x) + (B.y - C.y) * (B.y - C.y));
    double AC = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));

    if(AB + AC <= BC || BC + AC <= AB || AB + BC <= AC) {
        return 0;
    }

    double s = (AB + AC + BC) / 2;
    double dientich = sqrt(s * (s - AB) * (s - BC) * (s - AC));
    double R = (AB * AC * BC) / (4 * dientich);
    double ketqua = PI * R * R;
    return ketqua;
}

void nhap(diem &A, diem &B, diem &C) {
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        diem A, B, C;
        nhap(A, B, C);
        if(!check(A, B, C)) cout << "INVALID" << endl;
        else cout << fixed << setprecision(3) << check(A, B, C) << endl;
    }
    return 0;
}

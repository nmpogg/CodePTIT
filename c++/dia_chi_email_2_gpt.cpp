#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string createEmail(const string& name, int index) {
    string email = name;
    email.erase(remove_if(email.begin(), email.end(), ::isspace), email.end()); // Xóa kho?ng tr?ng
    email += to_string(index);
    email += "@ptit.edu.vn";
    transform(email.begin(), email.end(), email.begin(), ::tolower); // Chuy?n email v? ch? thu?ng
    return email;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Xóa ký t? newline sau N
    vector<string> names;
    
    for (int i = 0; i < N; i++) {
        string name;
        getline(cin, name);
        names.push_back(name);
    }
    
    for (int i = 0; i < N; i++) {
        string email = createEmail(names[i], 1);
        cout << email << endl;
    }
    
    return 0;
}


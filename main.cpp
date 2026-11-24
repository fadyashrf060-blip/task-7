#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ofstream out("students.txt");
    if (out.fail()) {
        cout << "Error creating file" << endl;
        return 1;
    }

    out << "Hadeer Mahmoud" << endl;
    out << "Youssef Ali" << endl;
    out << "Ahmed Mostafa" << endl;
    out << "Esraa Ebrahim" << endl;
    out.close();

    ifstream in("students.txt");
    if (in.fail()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    vector<string> names;
    string name;
    while (getline(in, name)) {
        if (!name.empty()) {
            names.push_back(name);
        }
    }
    in.close();

    sort(names.begin(), names.end());

    cout << "Names sorted in ascending order:" << endl;
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }

    return 0;
}

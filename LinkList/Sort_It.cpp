#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;

    int totalmarks() const {
        return math + eng;
    }
};


bool compare(student a, student b) {
    if (a.totalmarks() != b.totalmarks()) {
        return a.totalmarks() > b.totalmarks(); 
    } else {
        return a.id < b.id; 
    }
}

int main() {
    int n;
    cin >> n;
    student* students = new student[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section
            >> students[i].id >> students[i].math >> students[i].eng;
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].math<< " " << students[i].eng << endl;
    }

    delete[] students;
    return 0;
}

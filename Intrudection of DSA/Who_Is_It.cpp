#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    int id;
    string name;
    char section;
    int totalmarks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Students highest;
        int f = 1;

        for (int j = 0; j < 3; j++)
        {
            Students temp;
            cin >> temp.id >> temp.name >> temp.section >> temp.totalmarks;

            if (f)
            {
                highest = temp;
                f = 0;
            }
            else
            {
                if (temp.totalmarks > highest.totalmarks ||
                    (temp.totalmarks == highest.totalmarks && temp.id < highest.id))
                {
                    highest = temp;
                }
            }
        }

        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.totalmarks << endl;
    }

    return 0;
}

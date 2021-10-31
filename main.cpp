// Laba4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct discipline {
    string dname;
    int mark;
};
struct Student {
    string fio;
    discipline result[4];
};
int main()
{

    int n,d;
    cout << "enter the number of the students" << endl;
    cin >> n;
    cout << "enter the number of the disciplines" << endl;
    cin >> d;
    vector<Student> St(n);
    for (int i = 0; i < n; i++) {
        cout << "enter fio" << endl;
        cin >> St[i].fio;
        for (int j = 0; j < d; j++) {
            cout << "Enter the discipline name" << endl;
            cin >> St[i].result[j].dname;
            cout << "Enter mark" << endl;
            cin >> St[i].result[j].mark;
        }
    }
    vector<int> middle(n);
    for (int i = 0; i < n; i++) {
        middle[i] = 0;
        for (int j = 0; j < d; j++) {
            middle[i] = middle[i] + St[i].result[j].mark;
        }
    }
    string best = St[0].fio;
    for (int i = 0; i < n-1; i++) {
        if (middle[i+1] > middle[i]) {
            best = St[i].fio;
        }
    }
    cout << "The best student is " << best << endl;
    return 0;
}
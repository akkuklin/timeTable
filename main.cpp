#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int way, rest;
    int h, m = 0;
    int time = 420;
    cout << "Введите время пути(в минутах): ";
    cin >> way;
    cout << "Введите время отдыха(в минутах): ";
    cin >> rest;
    cout << setfill('0');
    if (time+2*(way+rest) < 19*60){
        cout << "Расписание автобуса:" << endl;
        while (time < 19*60-way-rest) {
            h = time / 60;
            m = time % 60;
            cout << "A: " << setw(2) << h << ":" << setw(2) << m << " >> ";
            time += way;
            h = time / 60;
            m = time % 60;
            cout << "B: " << setw(2) << h << ":" << setw(2) << m << endl;
            time += rest;
            h = time / 60;
            m = time % 60;
            cout << "B: " << setw(2) << h << ":" << setw(2) << m << " >> ";
            time += way;
            h = time / 60;
            m = time % 60;
            cout << "A: " << setw(2) << h << ":" << setw(2) << m << endl;
            time += rest;
        }
    }   else
        cout << "Слишком долгий маршрут или отдых..";
    return 0;
}

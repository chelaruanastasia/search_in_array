#include <iostream>
#include <cstdlib>

#define NUMARU_MAXIM_ELEMENTE 40

using namespace std;

void randomVector(int vector[]) {
    int i;
    for (i = 0; i < NUMARU_MAXIM_ELEMENTE; i++) {
        vector[i] = rand() % 100 + 1;
    }
}

void afisareVector(int vector[]) {
    int i;
    cout << "Vector generat: ";
    for (i = 0; i < NUMARU_MAXIM_ELEMENTE; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[NUMARU_MAXIM_ELEMENTE];
    int x, i;
    bool hasFoundNumber = false;

    randomVector(v);
    afisareVector(v);

    cout << "Introdu numarul pe care vrei sa-l gasesti in vector: ";
    cin >> x;
    for (i = 0; i < NUMARU_MAXIM_ELEMENTE; i++) {
        if (v[i] == x) {
            hasFoundNumber = true;
            cout << "Numarul se afla la pozitia: " << i << endl;
        }
    }
    if (!hasFoundNumber) {
        cout << "Numarul " << x << " nu este in vector!" << endl;
    }

    return 0;
}

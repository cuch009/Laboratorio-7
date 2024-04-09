#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap(vector<string> &vec, int i, int j) {
    string temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

void bubbleSort(vector<string> &vec) {
    int n = vec.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec, j, j + 1);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    string nombres_array[] = {"Carlos", "Ana", "David", "Beatriz", "Elena"};
    vector<string> nombres(nombres_array, nombres_array + sizeof(nombres_array) / sizeof(nombres_array[0]));

    cout << "Nombres sin ordenar:" << endl;
    for (int i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << " ";
    }
    cout << endl;

    bubbleSort(nombres);

    cout << "\nNombres ordenados:" << endl;
    for (int i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << " ";
    }
    cout << endl;

    return 0;
}


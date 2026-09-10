#include <iostream>
#include <fstream>

using namespace std;

void prog_1() {
    cout << "1. Hello world!" << endl;
}

void prog_2() {
    cout << "2. ";
    for (int idx = 1; idx < 31; ++idx) {
        cout << idx << " ";
    }
    cout << endl;
}

void prog_3() {
    ofstream file("ex_4.txt");
    for (int idx = 1; idx < 31; ++idx) {
        file << idx + 1 << " ";
    }
    file.close();
}

void prog_4(int n) {
    ofstream file("ex_5.txt");
    for (int idx = 1; idx < n + 1; ++idx) {
        file << idx << " ";
    }
    file.close();
}

void prog_5(int n) {
    ofstream file("ex_7.txt");
    int tmp;
    int temp_1 = 1, temp_2 = 1;
    file << "1 " << 1 << endl;
    for (int idx = 2; idx < n + 1; ++idx) {
        file << idx << " " << temp_1 << endl;
        tmp = temp_2;
        temp_2 = temp_1;
        temp_1 = temp_1 + tmp;
    }
    file.close();
}

void prog_6(int n) {
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;
    for (int idx = 2; idx < n + 1; ++idx) {
        arr[idx] = arr[idx - 1] + arr[idx - 2];
    }

    for (int idx = 0; idx < n; ++idx) {
        cout << arr[idx] << " ";
    }
    cout << endl;
}

void prog_7(int n) {
    float arr[n];
    for (int idx = 0; idx < n; ++idx) {
        arr[idx] = 1 / (idx + 1);
    }

    cout << scientific;
    for (int idx = 0; idx < n; ++idx) {
        cout << arr[idx] << " ";
    }
    cout << endl;
}

int main() {
    prog_1();

    prog_2();

    prog_3();

    int n;
    cin >> n;
    prog_4(n);

    prog_5(n);

    prog_6(n);

    prog_7(n);

    return 0;
}
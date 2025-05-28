#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
    T* temp = new T[sizeSrc]; 
    retSize = 0;

    for (int i = 0; i < sizeSrc; i++) {
        bool found = false;

        for (int j = 0; j < sizeMinus; j++) 
        {
            if (src[i] == minus[j]) {
                found = true;
                break;
            }
        }

        if (!found) 
            temp[retSize++] = src[i]; 
      
    }

    T* result = new T[retSize];
    for (int i = 0; i < retSize; i++) {
        result[i] = temp[i];
    }

    delete[] temp; 
    return result;
}

int main() {
    int x[] = { 1, 2, 3, 4, 5, 6 };
    int y[] = { 1, 3, 5, 7 };

    int retSize;
    int* q = remove(x, 6, y, 4, retSize);

    for (int i = 0; i < retSize; i++)
        cout << q[i] << ' ';
    cout << endl;

    delete[] q;

    return 0;
}

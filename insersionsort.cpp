#include <iostream>

using namespace std;

void insertionSort(int A[], int N) {
    for (int i = 1; i < N; ++i) {
        int v = A[i];
        int j = i - 1;
        
        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j--;
        }
        5
        
        A[j + 1] = v;
    }
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    int A[N];
    cout << "Enter the elements:\n";
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    insertionSort(A, N);

    cout << "Sorted array:\n";
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

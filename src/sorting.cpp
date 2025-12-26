#include <iostream>
using namespace std;

void indent(int depth) {
    for (int i = 0; i < depth; i++)
        cout << "  ";
}

void merge(int arr[], int l, int m, int r, int depth) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    indent(depth);
    cout << "Merging  = ";

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];

    for (int x = l; x <= r; x++)
        cout << arr[x] << " ";
    cout << endl;
}


void mergeSort(int arr[], int l, int r, int depth = 0) {
    if (l < r) {
        int m = (l + r) / 2;

        indent(depth);
        cout << "Dividing:\n";

        indent(depth);
        cout << "Left  = ";
        for (int i = l; i <= m; i++)
            cout << arr[i] << " ";
        cout << endl;

        indent(depth);
        cout << "Right = ";
        for (int i = m + 1; i <= r; i++)
            cout << arr[i] << " ";
        cout << endl;

        mergeSort(arr, l, m, depth + 1);
        mergeSort(arr, m + 1, r, depth + 1);

        merge(arr, l, m, r, depth);
    }
}

void sortingMenu() {
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n--- Merge Sort Steps ---\n";
    mergeSort(arr, 0, n - 1, 0);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

#include <iostream>
using namespace std;

void sortingMenu();
void quickSortMenu();
void showMenu() {
    cout << "\n====== ADA Algorithm Simulator ======\n";
    cout << "1. Merge Sort Algorithm\n";
    cout << "2. Quick Sort Algorithm\n";
    cout << "3. Dynamic Programming\n";
    cout << "4. Graph Algorithms\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Merge Sort Algorithm selected\n";
                sortingMenu();
                break;
            case 2:
                cout << "Quick Sort Algorithm selected\n";
                quickSortMenu();
                break;
            case 3:
                cout << "Dynamic Programming selected\n";
                break;
            case 4:
                cout << "Graph Algorithms selected\n";
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, try again \n";
        }

    } while (choice != 0);

    return 0;
}


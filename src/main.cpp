#include <iostream>
using namespace std;

void sortingMenu();
void showMenu() {
    cout << "\n====== ADA Algorithm Simulator ======\n";
    cout << "1. Sorting Algorithms\n";
    cout << "2. Greedy Algorithms\n";
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
                cout << "Sorting Algorithms selected\n";
                sortingMenu();
                break;
            case 2:
                cout << "Greedy Algorithms selected\n";
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


#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string salsaNames[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[SIZE];
    int totalSales = 0, highest = 0, lowest = 0;
    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
            cin >> jarsSold[i];
            if (jarsSold[i] < 0)
                cout << "Please enter a positive number.\n";
        } while (jarsSold[i] < 0);

        totalSales += jarsSold[i];
        if (jarsSold[i] > jarsSold[highest]) highest = i;
        if (jarsSold[i] < jarsSold[lowest]) lowest = i;
    }
    cout << "\nSales Report:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << salsaNames[i] << ": " << jarsSold[i] << " jars\n";
    }
    cout << "Total Sales: " << totalSales << " jars\n";
    cout << "Highest selling product: " << salsaNames[highest] << "\n";
    cout << "Lowest selling product: " << salsaNames[lowest] << "\n";
    return 0;
}

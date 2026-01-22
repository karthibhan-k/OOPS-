#include <iostream> 
using namespace std;
int main() {
    double buyPrice, sellPrice;
    int quantity;
    double profit = 0.0, loss = 0.0;

    cout << "Enter the buying price per stock: ";
    cin >> buyPrice;
    cout << "Enter the selling price per stock: ";
    cin >> sellPrice;
    cout << "Enter the quantity of stocks: ";
    cin >> quantity;

    if (sellPrice > buyPrice) {
        profit = (sellPrice - buyPrice) * quantity;
        cout << "You made a profit of: " << profit << endl;
    } 
    else if (buyPrice > sellPrice) {
        loss = (buyPrice - sellPrice) * quantity;
        cout << "You incurred a loss of: " << loss << endl;
    } 
    else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}
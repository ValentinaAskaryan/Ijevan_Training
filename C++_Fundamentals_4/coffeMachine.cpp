#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct CoffeMachine {
    // Member struct which holds order results: coffe name, change, and coffee status.
    struct orderResults {
        string coffee_ ;
        double change_ ;
        bool success_ ;
    };

    // Declare member functions.
    CoffeMachine(vector<string> prodArray, vector<double> priceArray);
    void printPriceList();
    bool checkCoffeeExistance(string coffee);
    double getPrice(string coffee);
    bool isMoneyEnough(double money, double price);
    double getChange(double money, double price);
    orderResults takeOrder(string coffee, double money);

    // Member variables that are accessable only in struct.
    private:
        vector<string> products;
        vector<double> prices;
    
};

// Constructor definition. Takes prducts and prices.
// Tells when ready.
CoffeMachine::CoffeMachine(vector<string> prodArray, vector<double> priceArray) {
    products.assign(prodArray.begin(), prodArray.end());
    prices.assign(priceArray.begin(), priceArray.end());
    cout << "The Coffee machine is ready to take orders." << endl;
}

// Prints coffee menu.
void CoffeMachine::printPriceList() {
    cout << "PRODUCT : PRICE" << endl; 
    for(int it = 0; it < prices.size(); it++) {
        cout << products[it] << " : " << prices[it] << endl;
    }
}

// Checks if coffee is available in the menu.
bool CoffeMachine::checkCoffeeExistance(string coffee) {
    for(string& p : products) {
        if(p == coffee) return true;
    }
    return false;
}

// Returns coffee price.
double CoffeMachine::getPrice(string coffee) {
    for(int it = 0; it < products.size(); it++) {
        if(coffee == products[it]) return prices[it];
    }  
    return 0.0;
}

// Checks if customers money is enough for buying the coffee.
bool CoffeMachine::isMoneyEnough(double money, double price) {
    if(money >= price) return true;
    else return false;
}

// Returns the change.
double CoffeMachine::getChange(double money, double price) {
    return money - price;
}

// Main function in which all other member functions are encapsulated.
// Takes the order, does it, and returns the result to customer.
CoffeMachine::orderResults
CoffeMachine::takeOrder(string coffee, double money) {
    orderResults result{"", 0.0, false};

    if(!checkCoffeeExistance(coffee)) return result;
    double price = getPrice(coffee);
    if(!isMoneyEnough(money, price)) return result;

    result.success_ = true;
    result.coffee_  = coffee;
    result.change_  = getChange(money, price);

    return result;
}

int main() {
    vector<string> products = {"Espresso", "Americano", "Latte", "Cappuccino", "Mocha", "Flat White"};
    vector<double> prices = {2.5, 3.0, 3.5, 3.75, 4.0, 3.75};
    string coffee;
    double amount;

    CoffeMachine cm(products, prices);

    cm.printPriceList();
    cout << "Coffee menu." << endl;
    getline(cin, coffee);
    cout << "Money: ";
    cin >> amount;

    CoffeMachine::orderResults result = cm.takeOrder(coffee, amount);
    if(result.success_) cout << "Your coffee is ready. Enjoy it." << endl;
    else cout << "Sorry, your order can't be done." << endl;
    if(result.change_) cout << "Take your change " << result.change_ << " AMD" << endl;
    return 0;
}

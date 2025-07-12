#include <iostream>
#include <iomanip>

void ShowBalance(double Balance);
double Deposit(double &Balance, double Masukkan);
double Withdraw(double &Balance, double Masukkan);

int main() {

    double Balance = 0.0; // Initial balance
        int Insert;
        double Masukkan;

    do {
        std::cout << "*****BANK***** \n";
        std::cout << "1.Show Balance \n";
        std::cout << "2.Deposit \n";
        std::cout << "3.Withdraw \n";
        std::cout << "4.Exit \n";
        std::cout << "*****BANK*****" << std::endl;
        std::cin >> Insert;

        switch (Insert){
            case 1:
                ShowBalance(Balance);
                break;
            case 2:
                std::cout << "Enter amount to deposit: $";
                std::cin >> Masukkan;
                Deposit(Balance, Masukkan);
                break;
            case 3:
                std::cout << "Enter amount to withdraw: $";
                std::cin >> Masukkan;
                Withdraw(Balance, Masukkan);
                break;
            case 4:
                std::cout << "Thankyou!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }

    }while (4 != true);


}


void ShowBalance(double Balance) {
    std::cout << "Balance: $" << Balance << std::endl;
}
double Deposit(double &Balance, double Masukkan) {
    if (Masukkan > 0) {
    Balance += Masukkan;
    std::cout << std::fixed << std::setprecision(2) << "Balance: $" << Balance << std::endl;
    }
    else {
        std::cout << "Invalid amount. Please try again." << std::endl;
    }

    return Balance;
}
double Withdraw(double &Balance, double Masukkan) {

    if (Masukkan > 0) {
        Balance -= Masukkan;
    std::cout << "Balance: $" << Balance << std::endl;
    }
    else {
        std::cout << "Invalid amount. Please try again." << std::endl;
    }

    return Balance;
}
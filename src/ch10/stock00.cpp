#include "../../include/ch10/stock00.h"
#include <iostream>

void Stock::acquire(const std::string &co, long n, double price) {
    company = co;
    if (n < 0) {
        std::cout << "Number of shares cannot be negative; " << company
                  << " shares set to 0." << std::endl;
        shares = 0;
    } else {
        shares = n;
    }
    share_val = price;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << " Shares cannot be negative, Transcation fails "
                  << std::endl;
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        std::cout << " Number of shares sold cannot be negative. " << std::endl;
    } else if (num > shares) {
        std::cout << "You cannot sell more than you have! " << std::endl;
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::show() {
    std::cout << "Company: " << company << std::endl;
    std::cout << "Shares: " << shares << std::endl;
    std::cout << "Share price: " << share_val << std::endl;
    std::cout << "Total holding: " << total_val << std::endl;
}
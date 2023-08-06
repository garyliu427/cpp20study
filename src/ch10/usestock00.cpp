#include "../../include/ch10/stock00.h"
#include <iostream>

int main() {
    Stock fulffy_the_cat;
    fulffy_the_cat.acquire("NanoSmart", 20, 12.5);
    fulffy_the_cat.show();

    fulffy_the_cat.buy(15, 18.5);
    fulffy_the_cat.show();

    fulffy_the_cat.sell(405, 18.5);
    fulffy_the_cat.show();
    return 0;
}
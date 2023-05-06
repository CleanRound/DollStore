#include "doll.h"

int main() {
    Doll barbie;
    create_doll(barbie, "Barbie", 10.99, 100);
    barbie.print_doll();
    barbie.update_doll("New Barbie", 15.99, 75);
    barbie.print_doll();
    return 0;
}

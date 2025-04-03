#include <iostream>
#include "classes.h"

int main() {

    Base1 *obj1 = new Base1;
    obj1->impBase1();

    Base2 *obj2 = new Base2;
    obj2->impBase2();

    Marsoft *marcio = new Marsoft;
    marcio->impBase1();
    marcio->impBase2();

    return 0;
}

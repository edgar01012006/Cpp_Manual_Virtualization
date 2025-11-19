
#include "include/SingleInheritance.hpp"

int main() {
    /*
    Derived derivedObj;
    Base* ptr = &derivedObj;
    ptr->callVirtual("foo");
    ptr->callVirtual("bar");
    Base baseObj;

    baseObj.callVirtual("foo");
    baseObj.callVirtual("bar");
    */

    Virtualizable* v = new Derived;

    if (Derived* d = dynamicCast<Derived>(v)) {
         std::cout << "Cast is successful\n";
    }
    else { std::cout << "Case is unsuccessful\n"; }

    if (Base* b = dynamicCast<Base>(v)) {
        std::cout << "Cast is successful\n";
    }
    else { std::cout << "Case is unsuccessful\n"; }
}
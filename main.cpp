
#include "include/SingleInheritance.hpp"

int main() {
    Derived derivedObj;
    Base* ptr = &derivedObj;
    ptr->callVirtual("foo");
    ptr->callVirtual("bar");
    Base baseObj;
    baseObj.callVirtual("foo");
    baseObj.callVirtual("bar");
}
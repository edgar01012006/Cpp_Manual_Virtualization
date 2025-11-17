#ifndef SINGLEINHERITANCE_HPP
#define SINGLEINHERITANCE_HPP

#include <iostream>
#include "../include/Virtualizable.hpp"

class Base : public Virtualizable {
    public:
        Base(FnPtr fn1 = (FnPtr)&Base::foo, FnPtr fn2 = (FnPtr)&Base::bar) : Virtualizable{} {
            registerVirtual("foo", fn1);
            registerVirtual("bar", fn2);
        }
        void foo() { std::cout << "Base foo\n"; }
        void bar() { std::cout << "Base bar\n"; }
};

class Derived : public Base {
    public:
        Derived() : Base ((FnPtr)&Derived::foo, (FnPtr)&Derived::bar) {} // no use case for "type name" for now
        void foo() { std::cout << "Derived foo\n"; }
        void bar() { std::cout << "Derived bar\n"; }
};

#endif /* SINGLEINHERITANCE_HPP */
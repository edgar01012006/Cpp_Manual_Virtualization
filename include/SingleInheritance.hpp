#ifndef SINGLEINHERITANCE_HPP
#define SINGLEINHERITANCE_HPP

#include <iostream>
#include "../include/Virtualizable.hpp"

class Base : public Virtualizable {
    public:
        Base(const std::string& typeId = getTypeId(), FnPtr fn1 = (FnPtr)&Base::foo, FnPtr fn2 = (FnPtr)&Base::bar) 
            : Virtualizable{} {
            setTypeId(typeId);
            registerVirtual("foo", fn1);
            registerVirtual("bar", fn2);
        }

        void foo() { std::cout << "Base foo\n"; }
        void bar() { std::cout << "Base bar\n"; }

        static std::string getTypeId() { return "Base"; }
};

class Derived : public Base {
    public:
        Derived(const std::string& typeId = "Derived") 
            : Base (typeId, (FnPtr)&Derived::foo, (FnPtr)&Derived::bar) {}
            
        void foo() { std::cout << "Derived foo\n"; }
        void loo() { std::cout << "Derived loo\n"; }

        void bar() { std::cout << "Derived bar\n"; }
        static std::string getTypeId() { return "Derived"; }
};

#endif /* SINGLEINHERITANCE_HPP */
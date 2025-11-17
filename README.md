# Manual Virtualization in C++ — Object-Oriented Dispatch Without `virtual` or RTTI

A C++ project demonstrating manual virtualization: calling derived-class methods through a base-class pointer without:

- `virtual` functions
- `dynamic_cast`
- templates for dispatch
- C++ RTTI

The system uses member-function pointers, runtime registration, and string-based dispatch to emulate a tiny virtual-table mechanism for single inheritance.

---

## Project Structure

```
├── main.cpp
├── include/
│   ├── Virtualizable.hpp
│   └── SingleInheritance.hpp
├── src/
│   └── Virtualizable.cpp
└── README.md
```

---

## Build & Run

Compile using g++ (C++17):

```bash
g++ -std=c++17 -Iinclude src/Virtualizable.cpp main.cpp -o program
./program
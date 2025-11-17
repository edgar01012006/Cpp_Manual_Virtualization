#include "../include/Virtualizable.hpp"

void Virtualizable::registerVirtual(const std::string& name, FnPtr fn) {
    m_names.push_back(name);
    m_fns.push_back(fn); // if using is in global scope it doesnt work, but when its inside class it works why?
}

void Virtualizable::callVirtual(const std::string& name) {
    for (int i = 0; i < m_names.size(); ++i) {
        if (m_names[i] == name) {
            (this->*m_fns[i])(); // (*m_fns[i])() <-this doesnt work, but with "this->" it works why?;
                                 // when workign with regular function pointers we dont dereference, so why use dereference here?
        }
    }
}
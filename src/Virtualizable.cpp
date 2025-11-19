#include "../include/Virtualizable.hpp"

void Virtualizable::registerVirtual(const std::string& name, FnPtr fn) {
    m_names.push_back(name);
    m_fns.push_back(fn);
}

void Virtualizable::callVirtual(const std::string& name) {
    for (int i = 0; i < m_names.size(); ++i) {
        if (m_names[i] == name) {
            (this->*m_fns[i])();
        }
    }
}
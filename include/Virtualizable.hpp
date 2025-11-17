#ifndef VIRTUALIZABLE_HPP
#define VIRTUALIZABLE_HPP

#include <vector>
#include <string>

class Virtualizable {
    public:
        using FnPtr = void(Virtualizable::*)();
        void registerVirtual(const std::string& name, FnPtr fn);
        void callVirtual(const std::string& name);
    private:
        std::vector<std::string> m_names;
        std::vector<FnPtr> m_fns;
};

#endif /* VIRTUALIZABLE_HPP */
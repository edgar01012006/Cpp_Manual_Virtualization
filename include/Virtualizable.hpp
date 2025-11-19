#ifndef VIRTUALIZABLE_HPP
#define VIRTUALIZABLE_HPP

#include <vector>
#include <string>

class Virtualizable;
using FnPtr = void(Virtualizable::*)();

class Virtualizable {
    protected:
        void setTypeId(const std::string& typeId) { m_typeId = typeId; }

    public:
        void registerVirtual(const std::string& name, FnPtr fn);
        void callVirtual(const std::string& name);
    
        std::string getTypeId() { return m_typeId; }
    
    private:
        std::string m_typeId;
        std::vector<std::string> m_names;
        std::vector<FnPtr> m_fns;
};

template <typename T>
T* dynamicCast(Virtualizable* type) {
    if (type->getTypeId() == T::getTypeId()) {
        return static_cast<T*>(type);
    }
    return nullptr;
}

#endif /* VIRTUALIZABLE_HPP */
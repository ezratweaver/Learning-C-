#include <iostream>

class SomeObj
{
    private:
        static inline int s_objectCount { 0 };
        int m_objectCount {};

    public:
        
        SomeObj() : m_objectCount { ++s_objectCount }
        {}

        int getCount() const { return m_objectCount; }

};

int main()
{
    
    SomeObj one {};
    SomeObj two {};
    SomeObj three {};

    std::cout << one.getCount() << " " << three.getCount() << "\n";

    return 0;
}

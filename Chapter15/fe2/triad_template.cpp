#include <iostream>
#include <string>

template <typename T, typename T2, typename T3>
class Triad
{
    public:
        Triad(T x, T2 y, T3 z)
        : m_x { x }, m_y { y }, m_z { z }
        {}

        T first() const { return m_x; }
        T2 second() const { return m_y; }
        T3 third() const { return m_z; }

        void print() const
        {
            std::cout << "[" << m_x << ", " << m_y << ", " << m_z << "]";   
        }

    private:
        T m_x {};
        T2 m_y {};
        T3 m_z {};

};


int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}

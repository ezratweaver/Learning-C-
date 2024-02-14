#include <iostream>
#include <string>
#include <string_view>


class Ball
{
    private:
        static constexpr std::string_view defaultColor { "black" };
        static constexpr float defaultRadius { 10.0 };

        std::string m_color { };
        float m_radius { };

    public:
        
        Ball(std::string_view color=defaultColor, float radius=defaultRadius)
        : m_color { color }, m_radius { radius }
        {
            print();
        }

        Ball(float radius)
        : Ball{ defaultColor, radius}
        {
        }

        void print()
        {
            std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
        }
};


int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}

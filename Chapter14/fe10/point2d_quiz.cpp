#include <iostream>
#include <cmath>

class Point2d
{
    public:
        Point2d() = default;

        Point2d(const float x, const float y)
        : m_x { x }, m_y { y }
        {}

        void print()
        {
            std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
        }

        double distanceTo(const Point2d& other)
        {
            return std::sqrt(std::pow((m_x - other.m_x), 2) +
                            std::pow((m_y - other.m_y), 2));
        }

    private:

        float m_x { 0.0 };
        float m_y { 0.0 };
};


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}

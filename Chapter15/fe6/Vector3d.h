#pragma once

#include "Point3d.h"

class Vector3d
{
    public:
        Vector3d(double x, double y, double z);

        void print() const;

        friend void Point3d::moveByVector(const Vector3d& v);

    private:
        double m_x { };
        double m_y { };
        double m_z { };

};

#include "Point.h"

Bismath::Point::Point(const Vector2d& _pos, blip::IFunctional<void, const Point*>* _renderer)
    : GeometricObjectBase<Point>(_renderer), pos(_pos) {}

Bismath::Point::Point(blip::IFunctional<void, const Point*>* _renderer)
    : Point(Vector2d() ,_renderer) {}

Bismath::Point::Point(const GeomType& x, const GeomType& y, blip::IFunctional<void, const Point*>* _renderer)
    : Point(Vector2d(x, y) ,_renderer) {}

bool Bismath::Point::pointBelongs(const Vector2d& vector) const {
    return position == vector;
}

bool Bismath::Point::pointBelongs(const Point* point) const {
    return position == vector;
}

#pragma once

#include "GeometricObjectBase.h"
#include "Vector2d.h"

namespace Bismath {

    class Point : public GeometricObjectBase<Point> {
    private:
        Vector2d position;
    public:
        BISMATH_DRAW

        Point(blip::IFunctional<void, const Point *>* _renderer);
        Point(const Vector2d& _pos, blip::IFunctional<void, const Point *>* _renderer);
        Point(const GeomType& x, const GeomType& y, blip::IFunctional<void, const Point *>* _renderer);

        virtual bool pointBelongs(const Vector2d&) const override;
        virtual bool pointBelongs(const Point*) const override;

        Vector2d getPosition() const { return position; }
        void setPosition(const Vector2d& _position) { position = _position; }
    };

}

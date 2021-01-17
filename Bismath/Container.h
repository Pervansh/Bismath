#pragma once

#include "GeometricObject.h"

namespace Bismath {

class Container {
private:
    GeometricObject* object;

public:
    Container(GeometricObject* object) { this->object = object; }

    virtual void resetData() = 0;

    GeometricObject* getObject() { return object; }
};

}

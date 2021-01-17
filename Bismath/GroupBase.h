#pragma once

#include "GeometricObjectBase.h"
#include "Group.h"

namespace Bismath {

template <class T>
class GroupBase : public Group, public GeometricObjectBase<T> {
public:

    virtual blip::IFunctional<void, const T*> getStandartGroupRenderer();
};

}

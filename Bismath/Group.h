#pragma once

/*
 * Сейчас Group является частью GeometricObject
 */

#include "GeometricObject.h"
#include "LinkedList.h"

namespace Bismath {

class Group : public GeometricObject {
private:
    LinkedList<GeometricObject*>* memberList;

public:
    Group();

    /** Calls draw method for every member */
    virtual void drawAllMembers() const;

    virtual ~Group();
};

}


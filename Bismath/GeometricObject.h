#pragma once

#include "Vector2d.h"
#include "LinkedList.h"

namespace Bismath {
class Point;
class Group;

class GeometricObject {
private:
    mutable LinkedList<GeometricObject*> memberList;
    mutable LinkedList<GeometricObject*> groupList;

protected:
    LinkedList<GeometricObject*>* getMemberList() { return &memberList; }
    LinkedList<GeometricObject*>* getGroupList() { return &groupList; }

public:
    virtual bool pointBelongs(const Point*) const = 0;
    virtual bool pointBelongs(const Vector2d&) const = 0;

    virtual void draw() const = 0;
    /** Calls draw method for every member */
    virtual void drawAllMembers() const;
};

}

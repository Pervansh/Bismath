#include "GeometricObject.h"

void Bismath::GeometricObject::drawAllMembers() const {
    memberList.forEach([](GeometricObject*& object) {
        object->draw();
    });
}

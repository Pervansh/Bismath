#include "TreeLayoutManager.h"

Bismath::TreeContainer::TreeContainer(GeometricObject* object, bool conflictable)
    : Container(object) {
    this->conflictable = conflictable;
    resetData();
}

void Bismath::TreeContainer::resetData() {
    color = -1;
}

bool Bismath::TreeLayoutManager::process(Bismath::TreeContainer* current) {

}

void Bismath::TreeLayoutManager::addObject(GeometricObject* object, bool conflictable) {
    auto container = new TreeContainer(object, conflictable);
    LayoutManager::addContainer(container);
}

void Bismath::TreeLayoutManager::addObject(GeometricObject* object) {
    addObject(object, false);
}

void Bismath::TreeLayoutManager::addConflictableObject(GeometricObject* object) {
    addObject(object, true);
}

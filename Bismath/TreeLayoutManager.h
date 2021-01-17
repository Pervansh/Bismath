#pragma once

#include "LayoutManager.h"
#include "Container.h"

namespace Bismath {

class TreeContainer : Container {
public:
    /** If color equal -1, then object doesn't belongs to a component */
    int color;
    /** If it's true, then this is the articulation point */
    bool conflictable;

    TreeContainer(GeometricObject* object, bool conflictable);

    virtual void resetData() override;
};

class TreeLayoutManager : public LayoutManager<TreeContainer> {
public:
    TreeLayoutManager();

    virtual bool process(TreeContainer* current) override;

    virtual void addObject(GeometricObject*, bool conflictable);
    virtual void addObject(GeometricObject*);
    virtual void addConflictableObject(GeometricObject*);
};

}


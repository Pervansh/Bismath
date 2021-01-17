#pragma once

#include "Container.h"
#include "IFunctional.h"
#include "LinkedList.h"

namespace Bismath {

/**
 * Agree only a Bismath::Container descendant as the parameter of template
 */
template <class T>
class LayoutManager {
private:
    LinkedList<T*> containerList;

public:
    LayoutManager();

    /** Returns true, if layout can be constructed with this layout manager, else false */
    virtual bool process(T* current) = 0;

    virtual void addContainer(T*);
    virtual bool compose();
    virtual void resetData();
};

}

template <class T>
void Bismath::LayoutManager<T>::addContainer(T* container) {
    containerList.add(container);
}

template <class T>
bool Bismath::LayoutManager<T>::compose() {
    resetData();
    return process(containerList.getFirst()->data);
}

template <class T>
void Bismath::LayoutManager<T>::resetData() {
    containerList.forEach([](T& container) {
        container.resetData();
    });
}


#pragma once
#include "IFunctional.h"
#include "GeometricObject.h"

/** Standart draw function for GeometricObject */
#define BISMATH_DRAW \
    virtual void draw() const override { \
        (*getRenderer())(this); \
    }

/** Renderer that draws geometric object members */
#define BISMATH_MEMBERS_RENDERER(T, name) \
    blip::IFunctional<void, const T*>* name = blip::toFunctional([](const T* object){ \
        object->drawAllMembers(); \
    });

/** Creates a renderer with your code */
#define BISMATH_RENDERER(T, name, code) \
    blip::IFunctional<void, const T*>* name = blip::toFunctional([](const T* object) code );


namespace Bismath {

    template <class T>
    class GeometricObjectBase : public GeometricObject {
    private:
        blip::IFunctional<void, const T*>* renderer;
    public:
        GeometricObjectBase(blip::IFunctional<void, const T*>* _renderer) {
            setRenderer(_renderer);

        }

        virtual void setRenderer(blip::IFunctional<void, const T*>* _renderer) { renderer = _renderer; }
        virtual blip::IFunctional<void, const T*>* getRenderer() const { return renderer; }
    };
}


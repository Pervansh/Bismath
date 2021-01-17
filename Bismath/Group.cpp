#include "Group.h"

void Bismath::Group::drawAllMembers() const {
    for (auto it = memberList->getFirst(); it != nullptr; it = it->next) {
        it->data->draw();
    }
}

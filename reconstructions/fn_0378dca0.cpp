#include "botw/ghs_intrinsics.h"

extern "C" void* fn_0308e578(unsigned size);

struct HandleSlot {
    void* target;
    int index;
    bool active;
};

extern "C" HandleSlot* fn_0378dca0(HandleSlot* storage) {
    __schedule_barrier();
    if (storage == 0) {
        storage = static_cast<HandleSlot*>(fn_0308e578(12));
        if (storage == 0) {
            return storage;
        }
    }
    storage->target = 0;
    storage->index = -1;
    storage->active = false;
    return storage;
}

#include "botw/ghs_intrinsics.h"

struct State {
    char padding[79];
    unsigned char flags;
};

extern "C" void fn_02e8aa38(State* self, bool first, bool second, bool alternate) {
    if (alternate) {
        if (first)
            self->flags |= 4;
        else
            self->flags &= ~4;
        if (second)
            self->flags |= 8;
        else
            self->flags = __RLWINM(self->flags, 0, 29, 27);
    } else {
        if (first)
            self->flags |= 1;
        else
            self->flags &= ~1;
        if (second)
            self->flags |= 2;
        else
            self->flags = __RLWINM(self->flags, 0, 31, 29);
    }
}

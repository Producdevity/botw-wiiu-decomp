#include "botw/ghs_intrinsics.h"

extern "C" void fn_034a9494(const int* count) {
    int remaining = *count;
    if (remaining > 0) {
        do {
            __memory_changed();
        } while (--remaining);
    }
}

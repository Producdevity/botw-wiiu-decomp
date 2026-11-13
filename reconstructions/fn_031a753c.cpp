#include "botw/ghs_intrinsics.h"

extern "C" void fn_031a753c(const int* count) {
    int remaining = *count;
    if (remaining > 0) {
        do {
            __memory_changed();
        } while (--remaining);
    }
}

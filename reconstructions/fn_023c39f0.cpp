#include "botw/teardown.h"

extern "C" void fn_02256558(void* object, unsigned flags);

extern "C" void fn_023c39f0(void* object, unsigned flags) {
    teardown::destroy<fn_02256558, 0, 0>(object, flags);
}

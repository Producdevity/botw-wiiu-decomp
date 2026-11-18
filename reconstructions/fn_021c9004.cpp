#include "botw/teardown.h"

extern "C" void fn_021c6bec(void* object, unsigned flags);

extern "C" void fn_021c9004(void* object, unsigned flags) {
    teardown::destroy<fn_021c6bec, 0, 0>(object, flags);
}

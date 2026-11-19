#include "botw/teardown.h"

extern "C" void fn_029c2fc4(void* object, unsigned flags);

extern "C" void fn_029c4624(void* object, unsigned flags) {
    teardown::destroy<fn_029c2fc4, 0, 0>(object, flags);
}

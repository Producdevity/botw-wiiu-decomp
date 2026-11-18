#include "botw/teardown.h"

extern "C" void fn_0284d378(void* object, unsigned flags);

extern "C" void fn_0284d010(void* object, unsigned flags) {
    teardown::destroy<fn_0284d378, 0, 0>(object, flags);
}

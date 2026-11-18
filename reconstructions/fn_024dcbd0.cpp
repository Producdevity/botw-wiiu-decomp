#include "botw/teardown.h"

extern "C" void fn_024db4c4(void* object, unsigned flags);

extern "C" void fn_024dcbd0(void* object, unsigned flags) {
    teardown::destroy<fn_024db4c4, 0, 0>(object, flags);
}

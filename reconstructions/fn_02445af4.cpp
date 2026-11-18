#include "botw/teardown.h"

extern "C" void fn_0246c6bc(void* object, unsigned flags);

extern "C" void fn_02445af4(void* object, unsigned flags) {
    teardown::destroy<fn_0246c6bc, 0, 0>(object, flags);
}

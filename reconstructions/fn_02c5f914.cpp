#include "botw/teardown.h"

extern "C" void fn_021fd2dc(void* object, unsigned flags);

extern "C" void fn_02c5f914(void* object, unsigned flags) {
    teardown::destroy<fn_021fd2dc, 0, 0>(object, flags);
}

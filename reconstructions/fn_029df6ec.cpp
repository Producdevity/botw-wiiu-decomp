#include "botw/teardown.h"

extern "C" void fn_029c89b4(void* object, unsigned flags);

extern "C" void fn_029df6ec(void* object, unsigned flags) {
    teardown::destroy<fn_029c89b4, 0, 0>(object, flags);
}

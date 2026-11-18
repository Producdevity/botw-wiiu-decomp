#include "botw/teardown.h"

extern "C" void fn_02067b38(void* object, unsigned flags);

extern "C" void fn_0206d63c(void* object, unsigned flags) {
    teardown::destroy<fn_02067b38, 0, 0>(object, flags);
}

#include "botw/teardown.h"

extern "C" void fn_030a5ab4(void* object, unsigned flags);

extern "C" void fn_030c07fc(void* object, unsigned flags) {
    teardown::destroy<fn_030a5ab4, 0, 0>(object, flags);
}

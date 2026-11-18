#include "botw/teardown.h"

extern "C" void fn_02722ee0(void* object, unsigned flags);

extern "C" void fn_02721f4c(void* object, unsigned flags) {
    teardown::destroy<fn_02722ee0, 0, 0>(object, flags);
}

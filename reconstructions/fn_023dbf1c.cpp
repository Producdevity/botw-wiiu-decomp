#include "botw/teardown.h"

extern "C" void fn_023bda00(void* object, unsigned flags);

extern "C" void fn_023dbf1c(void* object, unsigned flags) {
    teardown::destroy<fn_023bda00, 0, 0>(object, flags);
}

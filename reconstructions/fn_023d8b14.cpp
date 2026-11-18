#include "botw/teardown.h"

extern "C" void fn_023bda00(void* object, unsigned flags);

extern "C" void fn_023d8b14(void* object, unsigned flags) {
    teardown::destroy<fn_023bda00, 0, 0>(object, flags);
}

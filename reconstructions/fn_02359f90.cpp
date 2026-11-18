#include "botw/teardown.h"

extern "C" void fn_02357a28(void* object, unsigned flags);

extern "C" void fn_02359f90(void* object, unsigned flags) {
    teardown::destroy<fn_02357a28, 0, 0>(object, flags);
}

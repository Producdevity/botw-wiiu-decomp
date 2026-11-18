#include "botw/teardown.h"

extern "C" void fn_02227b90(void* object, unsigned flags);

extern "C" void fn_02211920(void* object, unsigned flags) {
    teardown::destroy<fn_02227b90, 0, 0>(object, flags);
}

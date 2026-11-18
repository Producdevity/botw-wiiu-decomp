#include "botw/teardown.h"

extern "C" void fn_021174c8(void* object, unsigned flags);

extern "C" void fn_02118200(void* object, unsigned flags) {
    teardown::destroy<fn_021174c8, 0, 0>(object, flags);
}

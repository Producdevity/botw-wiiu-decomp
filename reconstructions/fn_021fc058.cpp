#include "botw/teardown.h"

extern "C" void fn_021fa658(void* object, unsigned flags);

extern "C" void fn_021fc058(void* object, unsigned flags) {
    teardown::destroy<fn_021fa658, 0, 0>(object, flags);
}

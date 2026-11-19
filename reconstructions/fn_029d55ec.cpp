#include "botw/teardown.h"

extern "C" void fn_029d4850(void* object, unsigned flags);

extern "C" void fn_029d55ec(void* object, unsigned flags) {
    teardown::destroy<fn_029d4850, 0, 0>(object, flags);
}

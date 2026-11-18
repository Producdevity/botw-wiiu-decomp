#include "botw/teardown.h"

extern "C" void fn_02921c04(void* object, unsigned flags);

extern "C" void fn_02937580(void* object, unsigned flags) {
    teardown::destroy<fn_02921c04, 0, 0>(object, flags);
}

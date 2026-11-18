#include "botw/teardown.h"

extern "C" void fn_025e7324(void* object, unsigned flags);

extern "C" void fn_028fba10(void* object, unsigned flags) {
    teardown::destroy<fn_025e7324, 0, 0>(object, flags);
}

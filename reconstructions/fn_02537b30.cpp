#include "botw/teardown.h"

extern "C" void fn_0273c9e4(void* object, unsigned flags);

extern "C" void fn_02537b30(void* object, unsigned flags) {
    teardown::destroy<fn_0273c9e4, 0, 0>(object, flags);
}

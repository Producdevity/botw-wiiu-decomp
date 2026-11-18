#include "botw/teardown.h"

extern "C" void fn_0211bb00(void* object, unsigned flags);

extern "C" void fn_0208bb64(void* object, unsigned flags) {
    teardown::destroy<fn_0211bb00, 0, 0>(object, flags);
}

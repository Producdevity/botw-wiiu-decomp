#include "botw/teardown.h"

extern "C" void fn_021a4620(void* object, unsigned flags);

extern "C" void fn_021a5f28(void* object, unsigned flags) {
    teardown::destroy<fn_021a4620, 0, 0>(object, flags);
}

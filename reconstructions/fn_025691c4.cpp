#include "botw/teardown.h"

extern "C" void fn_027f0bf0(void* object, unsigned flags);

extern "C" void fn_025691c4(void* object, unsigned flags) {
    teardown::destroy<fn_027f0bf0, 0, 0>(object, flags);
}

#include "botw/teardown.h"

extern "C" void fn_027b8364(void* object, unsigned flags);

extern "C" void fn_027a0a70(void* object, unsigned flags) {
    teardown::destroy<fn_027b8364, 0, 0>(object, flags);
}

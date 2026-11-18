#include "botw/teardown.h"

extern "C" void fn_028a6850(void* object, unsigned flags);

extern "C" void fn_026c7d10(void* object, unsigned flags) {
    teardown::destroy<fn_028a6850, 0, 0>(object, flags);
}

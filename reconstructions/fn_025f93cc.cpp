#include "botw/teardown.h"

extern "C" void fn_0292204c(void* object, unsigned flags);

extern "C" void fn_025f93cc(void* object, unsigned flags) {
    teardown::destroy<fn_0292204c, 0, 0>(object, flags);
}

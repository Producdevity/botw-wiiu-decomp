#include "botw/teardown.h"

extern "C" void fn_02975660(void* object, unsigned flags);

extern "C" void fn_02976990(void* object, unsigned flags) {
    teardown::destroy<fn_02975660, 0, 0>(object, flags);
}

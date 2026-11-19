#include "botw/teardown.h"

extern "C" void fn_02e91254(void* object, unsigned flags);

extern "C" void fn_02e9bfcc(void* object, unsigned flags) {
    teardown::destroy<fn_02e91254, 0, 0>(object, flags);
}

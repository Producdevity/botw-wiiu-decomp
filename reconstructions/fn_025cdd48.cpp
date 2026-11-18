#include "botw/teardown.h"

extern "C" void fn_025d176c(void* object, unsigned flags);

extern "C" void fn_025cdd48(void* object, unsigned flags) {
    teardown::destroy<fn_025d176c, 0, 0>(object, flags);
}

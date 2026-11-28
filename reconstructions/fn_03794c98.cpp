#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_03794b1c(ProcAccessor* accessor);

extern "C" void fn_03794c98(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_03794b1c(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

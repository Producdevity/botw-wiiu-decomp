#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_02b573d0(ProcAccessor* accessor);

extern "C" void fn_02b573d8(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_02b573d0(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

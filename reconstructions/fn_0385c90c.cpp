#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_0385c824(ProcAccessor* accessor);

extern "C" void fn_0385c90c(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_0385c824(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

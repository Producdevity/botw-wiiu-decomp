#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_03178174(ProcAccessor* accessor);

extern "C" void fn_0317821c(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_03178174(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

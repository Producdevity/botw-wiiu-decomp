#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_031f9d70(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_031f9d20(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_03a42f58(ProcAccessor* accessor);

extern "C" void fn_03a42fa0(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_03a42f58(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

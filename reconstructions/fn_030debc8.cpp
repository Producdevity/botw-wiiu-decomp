#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_030deb88(ProcAccessor* accessor);

extern "C" void fn_030debc8(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_030deb88(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}

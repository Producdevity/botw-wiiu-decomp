#include "botw/flagged_accessor.h"

extern "C" bool fn_03398348(FlaggedAccessor* accessor);

extern "C" bool fn_033983e0(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03398348(&accessor);
}

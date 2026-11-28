#include "botw/flagged_accessor.h"

extern "C" bool fn_03397964(FlaggedAccessor* accessor);

extern "C" bool fn_033979a0(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03397964(&accessor);
}

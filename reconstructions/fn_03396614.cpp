#include "botw/flagged_accessor.h"

extern "C" bool fn_0339395c(FlaggedAccessor* accessor);

extern "C" bool fn_03396614(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_0339395c(&accessor);
}

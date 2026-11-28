#include "botw/flagged_accessor.h"

extern "C" bool fn_03396dac(FlaggedAccessor* accessor);

extern "C" bool fn_033970e0(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03396dac(&accessor);
}

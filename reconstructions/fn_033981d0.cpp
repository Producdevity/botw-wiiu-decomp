#include "botw/flagged_accessor.h"

extern "C" bool fn_03394164(FlaggedAccessor* accessor);

extern "C" bool fn_033981d0(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03394164(&accessor);
}

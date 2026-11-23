#include "botw/flagged_accessor.h"

extern "C" bool fn_03396334(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03393850(&accessor);
}

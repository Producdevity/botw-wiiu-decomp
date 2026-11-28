#include "botw/flagged_accessor.h"

extern "C" bool fn_033979fc(FlaggedAccessor* accessor);

extern "C" bool fn_03397b08(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_033979fc(&accessor);
}

#include "botw/flagged_accessor.h"

extern "C" bool fn_03398558(FlaggedAccessor* accessor);

extern "C" bool fn_033985fc(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03398558(&accessor);
}

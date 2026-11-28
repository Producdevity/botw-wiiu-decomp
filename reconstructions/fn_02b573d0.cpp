#include "botw/proc_accessor.h"

extern "C" void fn_02b57190(void* object);

extern "C" void fn_02b573d0(ProcAccessor* accessor) {
    fn_02b57190((char*)accessor + 572);
}

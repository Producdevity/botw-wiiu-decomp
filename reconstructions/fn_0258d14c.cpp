#include "botw/proc_accessor.h"

extern "C" void fn_0378c734(ProcLink* link);

extern "C" void fn_0258d14c(char* value) {
    fn_0378c734((ProcLink*)(value + 68));
}

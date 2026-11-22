#include "botw/proc_accessor.h"

extern "C" void fn_0378c734(ProcLink* link) {
    if (link->data) {
        fn_0378c600(link->data, 1, link);
        link->data = 0;
    }
    link->flag = false;
}

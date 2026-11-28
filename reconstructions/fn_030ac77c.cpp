#include "botw/fast_mutex_section.h"

struct ListNode {
    ListNode* next;
};

extern "C" void fn_0420ce6c(ListNode* node);

extern "C" unsigned data_1049240c;
extern "C" FastMutexSection data_104923d0;
extern "C" ListNode data_1046c8c4;

extern "C" FastMutexSection* fn_030ac77c() {
    if (!data_1049240c) {
        data_1049240c = 1;
        fn_030bb49c(&data_104923d0);
        fn_0420ce6c(&data_1046c8c4);
    }
    return &data_104923d0;
}

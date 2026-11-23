#include "botw/fast_mutex_section.h"

struct ListNode {
    ListNode* next;
};

extern "C" void fn_0420ce6c(ListNode* node);

extern "C" unsigned data_10492390;
extern "C" FastMutexSection data_10492394;
extern "C" ListNode data_1046c8b8;

extern "C" FastMutexSection* fn_030ac724() {
    if (!data_10492390) {
        data_10492390 = 1;
        fn_030bb49c(&data_10492394);
        fn_0420ce6c(&data_1046c8b8);
    }
    return &data_10492394;
}

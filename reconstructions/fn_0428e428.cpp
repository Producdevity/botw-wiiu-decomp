typedef signed char s8;
typedef int s32;

namespace {
struct Task {
    char padding_0[8];
    s32 (*callback)();
    s32 *resultTarget;
    s32 result;
    char padding_14[1];
    s8 finished;
};
}

extern "C" void fn_0428e428(void *object) {
    s32 (*callback)();
    s32 *resultTarget;

    callback = ((Task *)object)->callback;
    ((Task *)object)->finished = 1;
    if (callback != 0) {
        callback();
    }
    resultTarget = ((Task *)object)->resultTarget;
    if (resultTarget != 0) {
        *resultTarget = ((Task *)object)->result;
    }
}

typedef int s32;

extern "C" void* fn_0308e578(unsigned);

namespace {
struct Pair {
    s32 first;
    s32 second;
};
}

extern "C" void fn_0396be78(void *storage, void *source) {
    void *target;

    target = storage;
    if ((target != 0) || (target = fn_0308e578(8U), ((target == 0) == 0))) {
        ((Pair *)target)->first = (s32) ((Pair *)source)->first;
        ((Pair *)target)->second = (s32) ((Pair *)source)->second;
    }
}

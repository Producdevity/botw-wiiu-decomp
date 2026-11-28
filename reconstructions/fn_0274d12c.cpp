extern "C" void* fn_02c19904(void* context, int index);
extern "C" int fn_02c19940(void *);

namespace {
struct Entry {
    char padding_0[24];
    unsigned int flags;
};
}

extern "C" int fn_0274d12c(int* object) {
    unsigned int flags;
    void* entry;

    if (fn_02c19940((void *)(*object)) != 0) {
        entry = fn_02c19904((void*)(*object), 0);
        if (entry != 0) {
            flags = ((Entry *)entry)->flags;
            if (!(flags & 1) && !((flags >> 1U) & 1)) {
                return 1;
            }
        }
    }
    return 0;
}

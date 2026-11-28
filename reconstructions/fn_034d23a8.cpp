typedef int s32;
typedef unsigned int u32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" int fn_034d5b0c(int);

namespace {
struct Object {
    char padding_0[0x40];
    s32 count;
    s32 elements;
    char padding_48[0x64];
    char lock[1];
};
}

extern "C" s32 fn_034d23a8(void *object) {
    s32 remaining;
    s32 offset;
    s32 element;
    u32 index;
    void *lock;

    lock = ((Object *)object)->lock;
    fn_030bb668(lock);
    remaining = ((Object *)object)->count;
    index = 0U;
    if (remaining > 0) {
        offset = 0;
        do {
            element = ((Object *)object)->elements;
            if (index < (u32)((Object *)object)->count) {
                element += offset;
            }
            if (fn_034d5b0c(element) != 0) {
                fn_030bb69c(lock);
                return 1;
            }
            remaining -= 1;
            index += 1;
            offset += 0xC0;
        } while (remaining != 0);
    }
    fn_030bb69c(lock);
    return 0;
}

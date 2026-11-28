typedef int s32;

namespace {
struct Table {
    unsigned char padding_0[4];
    s32 count;
    unsigned char padding_8[0xC];
    s32 entries;
    unsigned char padding_18[0x54 - 0x18];
    unsigned char lock[4];
};
}

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" s32 fn_03a00830(void *object, s32 index) {
    s32 entry;
    void *lock;

    lock = ((Table *)object)->lock;
    fn_030bb668(lock);
    if ((index >= ((Table *)object)->count) || (index < 0)) {
        fn_030bb69c(lock);
        return 0;
    }
    entry = ((Table *)object)->entries + (index * 0xA8);
    fn_030bb69c(lock);
    return entry;
}

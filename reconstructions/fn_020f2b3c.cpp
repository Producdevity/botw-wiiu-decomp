typedef int s32;

extern "C" void fn_02402278(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001e888;

extern "C" void fn_020f2b3c(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_02402278(object);
    pair.shared = &data_10263910;
    pair.data = &data_1001e888;
    fn_030e9aa8(object, (char *)object + 0x18, &pair.data);
}

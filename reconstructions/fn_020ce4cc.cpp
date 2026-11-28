typedef int s32;

extern "C" void fn_022c4d7c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100190e4;

extern "C" void fn_020ce4cc(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_022c4d7c(object);
    pair.shared = &data_10263910;
    pair.data = &data_100190e4;
    fn_030e9aa8(object, (char *)object + 0x5C, &pair.data);
}

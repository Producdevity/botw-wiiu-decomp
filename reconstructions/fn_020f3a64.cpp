typedef int s32;

extern "C" void fn_020f2b3c(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001ecdc;

extern "C" void fn_020f3a64(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_020f2b3c(object);
    pair.shared = &data_10263910;
    pair.data = &data_1001ecdc;
    fn_030e9b44(object, (char *)object + 0x6C, &pair.data);
}

typedef int s32;

extern "C" void fn_020f2374(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001e6e8;

extern "C" void fn_020f2720(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_020f2374(object);
    pair.shared = &data_10263910;
    pair.data = &data_1001e6e8;
    fn_030e9b44(object, (char *)object + 0x14, &pair.data);
}

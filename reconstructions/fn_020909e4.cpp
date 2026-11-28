typedef int s32;

extern "C" void fn_022f9758(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10011954;

extern "C" void fn_020909e4(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_022f9758(object);
    pair.shared = &data_10263910;
    pair.data = &data_10011954;
    fn_030e9aa8(object, (char *)object + 0x90, &pair.data);
}

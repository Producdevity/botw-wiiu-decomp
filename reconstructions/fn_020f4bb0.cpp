typedef int s32;

extern "C" void fn_020f5b60(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001f204;

extern "C" void fn_020f4bb0(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_020f5b60(object);
    pair.shared = &data_10263910;
    pair.data = &data_1001f204;
    fn_030e9be0(object, (char *)object + 0x6C, &pair.data);
}

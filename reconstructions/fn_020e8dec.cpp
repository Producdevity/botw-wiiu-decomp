typedef int s32;

extern "C" void fn_020e29ac(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001d058;

extern "C" void fn_020e8dec(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_020e29ac(object);
    pair.shared = &data_10263910;
    pair.data = &data_1001d058;
    fn_030e9be0(object, (char *)object + 0xF4, &pair.data);
}

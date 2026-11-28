typedef int s32;

extern "C" void fn_023630e8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10011628;

extern "C" void fn_0208feb4(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_023630e8(object);
    pair.shared = &data_10263910;
    pair.data = &data_10011628;
    fn_030e9be0(object, (char *)object + 0x14, &pair.data);
}

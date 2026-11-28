typedef int s32;

extern "C" void fn_02088e78(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10010bbc;

extern "C" void fn_02089ca8(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_02088e78(object);
    pair.shared = &data_10263910;
    pair.data = &data_10010bbc;
    fn_030e9aa8(object, (char *)object + 0xF8, &pair.data);
}

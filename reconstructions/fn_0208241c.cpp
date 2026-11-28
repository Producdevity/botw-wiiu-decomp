typedef int s32;

extern "C" void fn_022cc3e4(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1000f37c;

extern "C" void fn_0208241c(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_022cc3e4(object);
    pair.shared = &data_10263910;
    pair.data = &data_1000f37c;
    fn_030e9be0(object, (char *)object + 0x7C, &pair.data);
}

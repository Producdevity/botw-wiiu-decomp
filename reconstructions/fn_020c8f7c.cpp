typedef int s32;

extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" void fn_032d44e0(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10018478;

extern "C" void fn_020c8f7c(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_032d44e0(object);
    pair.shared = &data_10263910;
    pair.data = &data_10018478;
    fn_030e9d18(object, (char *)object + 0x34, &pair.data);
}

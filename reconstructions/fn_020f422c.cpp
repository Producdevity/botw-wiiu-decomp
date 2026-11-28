typedef int s32;

extern "C" void fn_02439748(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001ee60;

extern "C" void fn_020f422c(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_02439748(object);
    pair.shared = &data_10263910;
    pair.data = &data_1001ee60;
    fn_030e9aa8(object, (char *)object + 0xCC, &pair.data);
}

typedef int s32;

extern "C" void fn_021070c4(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10021f5c;

extern "C" void fn_021069c4(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_021070c4(object);
    pair.shared = &data_10263910;
    pair.data = &data_10021f5c;
    fn_030e9b44(object, (char *)object + 0x14, &pair.data);
}

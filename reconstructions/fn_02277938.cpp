typedef int s32;

extern "C" void fn_0226ca64(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10069d20;

extern "C" void fn_02277938(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_0226ca64(object);
    pair.shared = &data_10263910;
    pair.data = &data_10069d20;
    fn_030e9be0(object, (char *)object + 0x14, &pair.data);
}

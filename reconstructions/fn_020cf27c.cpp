typedef int s32;

extern "C" void fn_020cfa10(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10019404;

extern "C" void fn_020cf27c(void *object) {
    struct Pair {
        const void *data;
        const void *shared;
    } pair;

    fn_020cfa10(object);
    pair.shared = &data_10263910;
    pair.data = &data_10019404;
    fn_030e9be0(object, (char *)object + 0x2C, &pair.data);
}

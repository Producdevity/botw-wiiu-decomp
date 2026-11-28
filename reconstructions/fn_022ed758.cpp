typedef int s32;

extern "C" void fn_020c5b08(void*);
extern "C" void fn_02b3b9f4(void*, void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007b05c;

extern "C" void fn_022ed758(void *object) {
    struct { const void *first; const void *second; } pair;

    fn_020c5b08(object);
    pair.second = &data_10263910;
    pair.first = &data_1007b05c;
    fn_030e9be0(object, (char *)object + 0x40, &pair.first);
    fn_02b3b9f4((char *)object + 0x44, object);
}

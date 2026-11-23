typedef int s32;

extern "C" void fn_020c5b08(void*);
extern "C" void fn_02b3b9f4(void*, void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007b05c;

extern "C" void fn_022ed758(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020c5b08(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1007b05c;
    fn_030e9be0(arg0, (char *)arg0 + 0x40, &sp.f8);
    fn_02b3b9f4((char *)arg0 + 0x44, arg0);
}

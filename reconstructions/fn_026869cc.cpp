typedef int s32;

extern "C" void fn_02684580(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10109168;

extern "C" void fn_026869cc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02684580(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10109168;
    fn_030e9be0(arg0, (char *)arg0 + 0x1B0, &sp.f8);
}

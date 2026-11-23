typedef int s32;

extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_032613e4(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10025e88;

extern "C" void fn_021189bc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_032613e4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10025e88;
    fn_030e9aa8(arg0, (char *)arg0 + 0x8C, &sp.f8);
}

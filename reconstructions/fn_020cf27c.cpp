typedef int s32;

extern "C" void fn_020cfa10(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10019404;

extern "C" void fn_020cf27c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020cfa10(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10019404;
    fn_030e9be0(arg0, (char *)arg0 + 0x2C, &sp.f8);
}

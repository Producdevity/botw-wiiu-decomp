typedef int s32;

extern "C" void fn_02b78780(void*);
extern "C" int fn_02e17774(void*);
extern "C" void fn_02e17784(void*, void*);
extern "C" int fn_02e19674(void*);
extern "C" void fn_02e19684(void*, void*);
extern "C" void fn_02e1cb18(void *, void *, void *);
extern "C" void fn_02e40f54(void*, void*);
extern "C" void fn_0306b6b8(void);
extern "C" const unsigned char data_10263910;
extern "C" void * data_10467c80;

extern "C" s32 data_1003c1cc;

extern "C" void fn_02199e4c(s32 arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02e1cb18((void *)1, (void *)(arg0 + 0x14), (void *)1);
    fn_0306b6b8();
    sp.fC = &data_10263910;
    sp.f8 = &data_1003c1cc;
    fn_02b78780(&sp.f8);
    if (fn_02e19674(0) != 0) {
        fn_02e17784((void *)(fn_02e17774(0) - 1), 0);
        fn_02e19684(0, 0);
    }
    if ((void *) data_10467c80 != 0) {
        fn_02e40f54(data_10467c80, (void *)(arg0 + 0x14));
    }
}

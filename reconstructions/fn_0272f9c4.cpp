typedef int s32;

extern "C" void fn_0272f7c4(void*);
extern "C" int fn_034cc2f8(void*, void*);

extern "C" s32 fn_0272f9c4(void *arg0) {
    struct { s32 f8; } sp;

    sp.f8 = 0xF;
    (*(s32 *)((char *)(arg0) + (0x20))) = fn_034cc2f8(0, &sp.f8);
    fn_0272f7c4(arg0);
    return 1;
}

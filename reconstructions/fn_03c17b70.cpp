typedef int s32;

extern "C" void fn_03c0e660(void*, void*, void*);

extern "C" void fn_03c17b70(void *arg0, void *arg1) {
    struct { s32 f8; } sp;

    (*(void **)((char *)(arg1) + (4))) = arg0;
    sp.f8 = (s32)((char *)arg0 + 0x1C);
    fn_03c0e660((char *)arg0 + 0x18, &sp.f8, (char *)arg1 + 0x18);
    (*(s32 *)((char *)(arg0) + (0x38))) = (s32) ((*(s32 *)((char *)(arg0) + (0x38))) + 1);
}

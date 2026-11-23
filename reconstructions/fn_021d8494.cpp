typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02b616bc(void *, void *);
extern "C" int fn_02b61950(void*, void*);

extern "C" void fn_021d8494(void *arg0) {
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x1C))) != 0) {
        fn_02b616bc((char *)arg0 + 0x48, (void *)(fn_02b61950((char *)arg0 + 0x48, (*(void **)((char *)(arg0) + (0))))));
    }
}

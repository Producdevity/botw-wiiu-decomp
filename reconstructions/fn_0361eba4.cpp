typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0361eae4(void*, void*);

extern "C" void fn_0361eba4(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x14))) != 0) {
        fn_0361eae4(arg0, (*(void **)((char *)(arg0) + (0x18))));
        (*(void **)((char *)(arg0) + (0x18))) = (void *) ((char *)(*(void **)((char *)(arg0) + (0x18))) + 1);
    }
}

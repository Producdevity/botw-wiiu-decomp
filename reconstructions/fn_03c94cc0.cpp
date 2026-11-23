typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03c9a198(void*);
extern "C" void fn_03ca29ac(void*);

extern "C" s32 fn_03c94cc0(void *arg0) {
    if ((s32) (*(u8 *)((char *)((*(void **)((char *)(arg0) + (0x34)))) + (0x43B))) == 0) {
        fn_03c9a198((*(void **)((char *)(arg0) + (0x30))));
        fn_03ca29ac((*(void **)((char *)(arg0) + (0x34))));
    }
    return 0;
}

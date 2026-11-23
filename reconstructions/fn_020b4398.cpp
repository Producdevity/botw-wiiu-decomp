typedef unsigned char u8;
typedef int s32;

extern "C" void fn_029fcb58(void*, void*);

extern "C" void *data_10463578;

extern "C" void fn_020b4398(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x24))) != 0) {
        if ((void *) data_10463578 != 0) {
            fn_029fcb58(data_10463578, (*(void **)((char *)(arg0) + (0))));
        }
        (*(u8 *)((char *)(arg0) + (0x24))) = 0U;
    }
}

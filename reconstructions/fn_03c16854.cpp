typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03c1597c(void*);

extern "C" void fn_03c16854(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x3A5))) == 1) {
        if ((s32) (*(s32 *)((char *)(arg0) + (0x3A8))) == 1) {
            fn_03c1597c((char *)arg0 + 0x314);
        }
        if ((*(s32 *)((char *)(arg0) + (0x3A8))) != 0) {
            (*(s32 *)((char *)(arg0) + (0x3A8))) = (s32) ((*(s32 *)((char *)(arg0) + (0x3A8))) - 1);
        }
    }
}

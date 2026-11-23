typedef unsigned char u8;
typedef int s32;

extern "C" void fn_038feb08(void*);

extern "C" s32 fn_038fef68(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x6C))) == 0) {
        return 0;
    }
    fn_038feb08(arg0);
    return 1;
}

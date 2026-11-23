typedef unsigned char u8;
typedef int s32;

extern "C" unsigned char fn_02e55060(void);

extern "C" s32 fn_02e64490(void *arg0) {
    if ((fn_02e55060() != 0) || (((u8) (*(u8 *)((char *)(arg0) + (0x138))) >> 2U) & 1)) {
        return 1;
    }
    return 0;
}

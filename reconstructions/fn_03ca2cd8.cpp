typedef unsigned char u8;
typedef int s32;

extern "C" s32 fn_03ca2cd8(void *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    if ((arg1 == 0) || (arg2 == 0) || (arg3 == 0)) {
        return 0xFF676984;
    }
    *arg1 = (*(u8 *)((char *)(arg0) + (0x418)));
    *arg2 = (*(u8 *)((char *)(arg0) + (0x419)));
    *arg3 = (*(u8 *)((char *)(arg0) + (0x41A)));
    return 0;
}

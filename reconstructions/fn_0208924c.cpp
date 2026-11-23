typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02b12dbc(void*);

extern "C" void fn_0208924c(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0xE4))) != 0) {
        fn_02b12dbc((char *)arg0 + 0x40);
        (*(u8 *)((char *)(arg0) + (0xE4))) = 0U;
    }
}

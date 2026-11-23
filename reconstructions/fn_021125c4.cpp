typedef unsigned char u8;

extern "C" void fn_02309a88(void*);
extern "C" void fn_02b140d4(void*, void*);

extern "C" void fn_021125c4(void *arg0) {
    fn_02309a88(arg0);
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
    fn_02b140d4((char *)arg0 + 0x64, 0);
}

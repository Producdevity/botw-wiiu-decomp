typedef unsigned char u8;

extern "C" void fn_023fe5b0(void*);
extern "C" void fn_02b140d4(void*, void*);
extern "C" void fn_02b143d0(void*);

extern "C" void fn_02112cdc(void *arg0) {
    fn_023fe5b0(arg0);
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
    fn_02b143d0((char *)arg0 + 0x54);
    fn_02b140d4((char *)arg0 + 0x54, 0);
}

typedef unsigned char u8;

extern "C" void fn_023fe62c(void*);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_02344dd0(void *arg0) {
    fn_023fe62c(arg0);
    if (fn_03794838(arg0, 0, 0) != 0) {
        (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
    }
}

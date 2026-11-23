typedef unsigned char u8;

extern "C" int fn_03076fec(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_021a8624(void *arg0) {
    if (fn_03076fec(arg0) != 0) {
        fn_030ea2cc(arg0);
        (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
    }
}

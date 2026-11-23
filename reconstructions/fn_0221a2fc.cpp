typedef unsigned char u8;

extern "C" int fn_030ea2f4(void*);
extern "C" void fn_0339a0c4(void *);

extern "C" void fn_0221a2fc(void *arg0) {
    if (fn_030ea2f4(arg0) != 0) {
        fn_0339a0c4((*(void **)((char *)(arg0) + (0))));
    }
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
}

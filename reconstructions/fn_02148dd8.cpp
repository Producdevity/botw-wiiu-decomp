typedef int s32;

extern "C" void fn_02148dac(void *);
extern "C" void fn_02148dbc(void);
extern "C" void fn_02daa580(void*, void*, void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void *data_10463fe8;

extern "C" void fn_02148dd8(void *arg0) {
    s32 sp8;

    fn_030ea2cc(arg0);
    fn_02148dac(arg0);
    fn_02148dbc();
    if ((void *) data_10463fe8 != 0) {
        sp8 = (*(s32 *)((char *)(arg0) + (0x18)));
        fn_02daa580(data_10463fe8, &sp8, (*(void **)((char *)(arg0) + (0x1C))));
    }
}

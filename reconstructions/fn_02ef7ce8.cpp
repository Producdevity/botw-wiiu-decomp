typedef unsigned char u8;

extern "C" int fn_02ef7b08(void*);
extern "C" void fn_02ef7ba0(void *, unsigned);
extern "C" void fn_02ef7c98(void*);
extern "C" const unsigned char data_10263a00[];

extern "C" void fn_02ef7ce8(void *arg0) {
    if (fn_02ef7b08(arg0) != 0) {
        fn_02ef7c98(arg0);
        *(*(u8 **)((char *)(arg0) + (0x10))) = *data_10263a00;
        fn_02ef7ba0(arg0, 6U);
    }
}

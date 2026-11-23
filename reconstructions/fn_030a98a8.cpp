typedef unsigned short u16;

extern "C" void fn_030a9714(void*, void*, void*);
extern "C" void fn_030a980c(void*, void*);
extern "C" void fn_030aa208(void*);
extern "C" void fn_030aa2c8(void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_030a98a8(void *arg0) {
    void *temp_r3;
    void *var_r31;

    var_r31 = 0;
    if ((*(u16 *)((char *)(arg0) + (0x90))) & 1) {
        var_r31 = (char *)arg0 + 0x54;
        fn_030bb668(var_r31);
    }
    fn_030a9714(arg0, 0, 0);
    fn_030aa2c8(arg0);
    temp_r3 = (*(void **)((char *)(arg0) + (0x24)));
    if (temp_r3 != 0) {
        fn_030a980c(temp_r3, arg0);
        if (var_r31 == 0) {
            return;
        }
        goto block_6;
    }
    fn_030aa208(arg0);
    if (var_r31 != 0) {
block_6:
        fn_030bb69c(var_r31);
    }
}

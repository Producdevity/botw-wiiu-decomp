typedef unsigned short u16;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_042136a4(void *arg0) {
    void *temp_r31;

    if ((*(u16 *)((char *)(arg0) + (0x90))) & 1) {
        temp_r31 = (char *)arg0 + 0x54;
        fn_030bb668(temp_r31);
        if (temp_r31 != 0) {
            fn_030bb69c(temp_r31);
        }
    }
}

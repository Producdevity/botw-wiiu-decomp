extern "C" void fn_02b271d4(void*, void*, void*, void*);
extern "C" void fn_02b273a4(void*, void*);
extern "C" void fn_02b27414(void*);

extern "C" void fn_029d0930(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_02b271d4((char *)arg0 + 0x24, temp_r31, (char *)arg0 + 0x14, (char *)arg0 + 0x1C);
    fn_02b27414((char *)arg0 + 0x24);
    fn_02b273a4((char *)arg0 + 0x24, temp_r31);
}

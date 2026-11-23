typedef signed char s8;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_034050a0(void *arg0, s8 arg1) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0xBDC;
    fn_030bb668(temp_r31);
    (*(s8 *)((char *)(arg0) + (0xC19))) = arg1;
    fn_030bb69c(temp_r31);
}

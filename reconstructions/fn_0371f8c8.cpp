extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_03743cd0(void*);

extern "C" void fn_0371f8c8(void *arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0x5F0;
    fn_030bb668(temp_r31);
    fn_03743cd0(arg1);
    fn_030bb69c(temp_r31);
}

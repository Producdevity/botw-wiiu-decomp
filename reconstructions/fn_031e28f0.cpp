extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_031e5afc(void*, int);

extern "C" void fn_031e28f0(void *arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0x38;
    fn_030bb668(temp_r31);
    fn_031e5afc(arg1, 1);
    fn_030bb69c(temp_r31);
}

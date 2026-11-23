typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d1630(void*, void*);

extern "C" void fn_038d0c14(s32 arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = (void *)(arg0 + 0x7C);
    fn_030bb668(temp_r31);
    fn_038d1630((void *)(arg0 + 0x124), arg1);
    fn_030bb69c(temp_r31);
}

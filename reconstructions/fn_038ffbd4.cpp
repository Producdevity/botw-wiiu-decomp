typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_0390112c(void*, void*);

extern "C" void fn_038ffbd4(s32 arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = (void *)(arg0 + 0x570);
    fn_030bb668(temp_r31);
    fn_0390112c((void *)(arg0 + 0x55C), arg1);
    fn_030bb69c(temp_r31);
}

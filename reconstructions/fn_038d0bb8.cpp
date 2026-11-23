typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d15dc(void*, void*);

extern "C" void fn_038d0bb8(s32 arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = (void *)(arg0 + 0x40);
    fn_030bb668(temp_r31);
    fn_038d15dc((void *)(arg0 + 0x114), arg1);
    fn_030bb69c(temp_r31);
}

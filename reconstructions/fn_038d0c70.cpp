typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d1684(void*, void*);

extern "C" void fn_038d0c70(s32 arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = (void *)(arg0 + 0xB8);
    fn_030bb668(temp_r31);
    fn_038d1684((void *)(arg0 + 0x134), arg1);
    fn_030bb69c(temp_r31);
}

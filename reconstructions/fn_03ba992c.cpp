extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_03bc35f0(void*, void*);

extern "C" void fn_03ba992c(void *arg0) {
    void *temp_r31;

    if ((void *) (*(void **)((char *)(arg0) + (0x88))) != 0) {
        temp_r31 = (char *)arg0 + 0x48;
        fn_030bb668(temp_r31);
        fn_03bc35f0((*(void **)((char *)(arg0) + (0x88))), (*(void **)((char *)(arg0) + (0x44))));
        fn_030bb69c(temp_r31);
    }
}

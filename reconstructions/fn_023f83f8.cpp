extern "C" void fn_03072588();
extern "C" void fn_030725e8(int);
extern "C" void fn_030727cc();
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_023f83f8(void* arg0) {
    if ((int) (*(unsigned char*)((char*)arg0 + 16)) != 0) {
        fn_03072588();
        fn_030727cc();
        fn_030ea2cc(arg0);
        return;
    }
    fn_030725e8(1);
    (*(unsigned char*)((char*)arg0 + 16)) = 1U;
}

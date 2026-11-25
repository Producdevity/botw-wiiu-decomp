extern "C" void fn_030a6494(void *);
extern "C" void fn_030a6528(void *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_030a7ff4(void *self) {
    unsigned short *flags = (unsigned short *)((char *)self + 0x90);
    int lockedFlag = 1;
    void *lock = 0;
    if (*flags & lockedFlag) {
        lock = (char *)self + 0x54;
        fn_030bb668(lock);
    }
    fn_030a6494(self);
    fn_030a6528(self);
    if (lock != 0) {
        fn_030bb69c(lock);
    }
}

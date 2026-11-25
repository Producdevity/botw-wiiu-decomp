extern "C" void fn_030ab290(void *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_030ab310(void *self) {
    unsigned short *flags = (unsigned short *)((char *)self + 0x90);
    int lockedFlag = 1;
    void *lock = 0;
    if (*flags & lockedFlag) {
        lock = (char *)self + 0x54;
        fn_030bb668(lock);
    }
    fn_030ab290(self);
    if (lock != 0) {
        fn_030bb69c(lock);
    }
}

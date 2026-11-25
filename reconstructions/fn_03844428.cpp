extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_03844428(void *self) {
    void *lock = (char *)self + 0x140;
    int *count = (int *)((char *)self + 0x708);
    int *flags = (int *)((char *)self + 0x70C);
    fn_030bb668(lock);
    *flags = *flags | 0x80;
    *count = *count + 1;
    fn_030bb69c(lock);
}

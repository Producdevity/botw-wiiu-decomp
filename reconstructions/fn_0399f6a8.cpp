extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" int fn_0399f6a8(void *self) {
    void *lock = (char *)self + 0xD4;
    unsigned int *flags = (unsigned int *)((char *)self + 0xC8);
    int result;
    fn_030bb668(lock);
    result = (*flags >> 5) & 1;
    fn_030bb69c(lock);
    return result;
}

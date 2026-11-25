extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" int fn_02a07b98(void *self) {
    void *lock = (char *)self + 0x14;
    int *field = (int *)((char *)self + 0x4A4);
    int value;
    fn_030bb668(lock);
    value = *field;
    fn_030bb69c(lock);
    return value;
}

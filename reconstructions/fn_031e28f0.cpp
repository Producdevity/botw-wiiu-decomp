extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_031e5afc(void*, int);

extern "C" void fn_031e28f0(void *object, void *target) {
    void *lock;

    lock = (char *)object + 0x38;
    fn_030bb668(lock);
    fn_031e5afc(target, 1);
    fn_030bb69c(lock);
}

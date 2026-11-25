extern "C" void fn_030a1c6c(void *, void *);
extern "C" bool fn_030bb670(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_030a1d68(void *self, int arg1) {
    char *slot;
    if (fn_030bb670(*(void **)((char *)*(void **)((char *)self + 0x40) + 0x20)) != 0) {
        fn_030a1c6c(self, (void *)arg1);
        slot = (char *)self + 0x40;
        fn_030bb69c(*(void **)((char *)*(void **)slot + 0x20));
    }
}

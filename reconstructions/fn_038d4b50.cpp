extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d4da0(void*, void*);

extern "C" void fn_038d4b50(void *arg0, void *arg1) {
    fn_030bb668((char *)arg0 + 0x10);
    fn_038d4da0(arg0, arg1);
    fn_030bb69c((char *)arg0 + 0x10);
}

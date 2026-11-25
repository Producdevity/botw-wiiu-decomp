extern "C" void fn_03b4eab0(void *, void *, void *, void *);
extern "C" void fn_03b4ec40(void *, void *, void *, int, void *, void *, void *);
extern "C" void fn_03b4ede0(void *, void *, void *, void *);

extern "C" void fn_03b4ee48(void *arg0, void *arg1, void *arg2, void *arg3) {
    int mode = 7;
    fn_03b4eab0(arg0, arg1, arg2, arg3);
    fn_03b4ec40(arg0, arg1, arg2, mode, arg3, 0, 0);
    fn_03b4ede0(arg0, arg1, arg2, arg3);
}

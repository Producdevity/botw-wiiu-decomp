extern "C" void fn_03711eb0(void *arg0);
extern "C" void fn_039628f0(int, void*, int, int);

extern "C" void fn_03865d94(int arg0, int* arg1, int arg2, int arg3) {
    fn_03711eb0((void *)(*arg1));
    fn_039628f0(arg0, arg1, arg2, arg3);
}

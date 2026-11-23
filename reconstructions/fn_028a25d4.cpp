typedef int s32;

extern "C" void fn_028a2514(void*);
extern "C" void fn_028a2574(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10153380;

extern "C" void fn_028a25d4(void *arg0) {
    fn_028a2514(arg0);
    fn_028a2574(arg0);
    fn_037b8284(arg0, &data_10153380, 0);
}

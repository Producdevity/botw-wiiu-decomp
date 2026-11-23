typedef int s32;

extern "C" void fn_027b8bcc(void*);
extern "C" void fn_037b8798(void*, void*, int, int, void*);

extern "C" s32 data_1012edf4;

extern "C" void fn_027a0ac8(void *arg0) {
    fn_027b8bcc(arg0);
    fn_037b8798(arg0, &data_1012edf4, 1, 3, 0);
}

typedef int s32;

extern "C" void fn_027b8bcc(void*);
extern "C" void fn_037b8798(void*, void*, int, int, void*);

extern "C" s32 data_1012edf4;

extern "C" void fn_027a0ac8(void *object) {
    fn_027b8bcc(object);
    fn_037b8798(object, &data_1012edf4, 1, 3, 0);
}

typedef int s32;

extern "C" void fn_027ddc70(void*, void*);
extern "C" void fn_027ddca0(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10134c58;

extern "C" void fn_027ddcb8(void *arg0) {
    fn_027ddc70(arg0, 0);
    fn_027ddca0(arg0);
    fn_037b8284(arg0, &data_10134c58, 0);
}

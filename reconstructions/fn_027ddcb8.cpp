typedef int s32;

extern "C" void fn_027ddc70(void*, void*);
extern "C" void fn_027ddca0(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10134c58;

extern "C" void fn_027ddcb8(void *object) {
    fn_027ddc70(object, 0);
    fn_027ddca0(object);
    fn_037b8284(object, &data_10134c58, 0);
}

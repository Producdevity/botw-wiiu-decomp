typedef int s32;

extern "C" void fn_0250b0cc(void*);
extern "C" void fn_0378b19c(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100d2efc;

extern "C" void fn_0250ba74(void **object) {
    fn_0250b0cc(object);
    fn_0378b19c(*object, 0);
    fn_037b8284(object, &data_100d2efc, 0);
}

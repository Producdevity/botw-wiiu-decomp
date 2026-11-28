typedef int s32;

extern "C" void fn_027d9448(void*);
extern "C" void fn_027d95c8(void*);
extern "C" void fn_037b2d64(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10134138;

extern "C" void fn_027d95f8(void **object) {
    fn_027d9448(object);
    fn_037b2d64(*object, 0);
    fn_027d95c8(object);
    fn_037b8284(object, &data_10134138, 0);
}

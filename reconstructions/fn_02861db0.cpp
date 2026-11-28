typedef int s32;

extern "C" void fn_02861d20(void*, int);
extern "C" void fn_02c1a484(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101489bc;

extern "C" void fn_02861db0(void **object) {
    fn_02861d20(object, 1);
    fn_02c1a484(*object);
    fn_037b8284(object, &data_101489bc, 0);
}

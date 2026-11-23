typedef int s32;

extern "C" void fn_02861d20(void*, int);
extern "C" void fn_02c1a484(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101489bc;

extern "C" void fn_02861db0(void **arg0) {
    fn_02861d20(arg0, 1);
    fn_02c1a484(*arg0);
    fn_037b8284(arg0, &data_101489bc, 0);
}

typedef int s32;

extern "C" void fn_02861d20(void*, int);
extern "C" void fn_02c1a5fc(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101489d8;

extern "C" void fn_02861dfc(void **arg0) {
    fn_02861d20(arg0, 0);
    fn_02c1a5fc(*arg0);
    fn_037b8284(arg0, &data_101489d8, 0);
}

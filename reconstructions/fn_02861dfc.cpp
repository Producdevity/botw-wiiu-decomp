typedef int s32;

extern "C" void fn_02861d20(void*, int);
extern "C" void fn_02c1a5fc(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101489d8;

extern "C" void fn_02861dfc(void **object) {
    fn_02861d20(object, 0);
    fn_02c1a5fc(*object);
    fn_037b8284(object, &data_101489d8, 0);
}

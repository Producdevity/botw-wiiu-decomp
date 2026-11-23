typedef int s32;

extern "C" void fn_02550ce4(void*);
extern "C" void fn_0339bd70(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100dd2f4;

extern "C" void fn_02550f40(void **arg0) {
    fn_02550ce4(arg0);
    fn_0339bd70(*arg0);
    fn_037b8284(arg0, &data_100dd2f4, 0);
}

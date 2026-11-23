typedef int s32;

extern "C" void fn_02b7b6fc(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1015e470;

extern "C" void fn_028f9db0(void **arg0) {
    fn_02b7b6fc(*arg0);
    fn_037b8284(arg0, &data_1015e470, 0);
}

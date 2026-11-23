typedef int s32;

extern "C" void fn_0378da14(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1015ec90;

extern "C" void fn_028fd00c(void *arg0, void *arg1) {
    fn_0378da14((char *)arg0 + 0x30, arg1);
    fn_037b8284(arg0, &data_1015ec90, 0);
}

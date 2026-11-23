typedef int s32;

extern "C" void fn_0339bd18(void*, void*);
extern "C" void fn_0339bd38(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101154d8;

extern "C" void fn_026dc18c(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_0339bd18(temp_r31, (char *)arg0 + 0x44);
    fn_0339bd38(temp_r31, (char *)arg0 + 0x4C);
    fn_037b8284(arg0, &data_101154d8, 0);
}

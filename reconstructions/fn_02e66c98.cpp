typedef int s32;

extern "C" void fn_02e3fa0c(void*);
extern "C" void fn_03625e5c(void*, void*);

extern "C" void *data_10467c80;
extern "C" s32 data_1052a4a0;

extern "C" void fn_02e66c98(s32 arg0) {
    fn_02e3fa0c(data_10467c80);
    fn_03625e5c((void *)(arg0 + 0x18), &data_1052a4a0);
}

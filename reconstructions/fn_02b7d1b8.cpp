extern "C" int fn_0378db34(void*);
extern "C" void fn_02b38a6c(void*, void*, int);
extern "C" void fn_0378dc60(int, int);

extern "C" void fn_02b7d1b8(void* self, void* handle) {
    if (fn_0378db34(handle) == 0) {
        *(int*)((char*)self + 0x38) = 3;
        return;
    }
    fn_02b38a6c((char*)self + 4, handle, 1);
    fn_0378dc60((int)((char*)self + 0x24), (int)handle);
    *(int*)((char*)self + 0x38) = 1;
}

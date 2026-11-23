extern "C" void* fn_0204fa10(int handle);
extern "C" void fn_03798ae8(int handle, void* object, int* data);
extern "C" int data_10549e00;

extern "C" void fn_02051564(int* handle) {
    void* object = fn_0204fa10(*handle);
    if (object != 0) {
        fn_03798ae8(*handle, (char*)object + 0x1F8, &data_10549e00);
    }
}

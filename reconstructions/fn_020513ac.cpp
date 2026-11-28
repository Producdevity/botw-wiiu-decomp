namespace {
struct Object {
    char padding_0[0x1F8];
    char member_1f8[1];
};
}

extern "C" void* fn_0204fa10(int handle);
extern "C" void fn_03798ae8(int handle, void* object, int* data);
extern "C" int data_10549e00;

extern "C" void fn_020513ac(int* handle) {
    Object* object = (Object*)fn_0204fa10(*handle);
    if (object != 0) {
        fn_03798ae8(*handle, object->member_1f8, &data_10549e00);
    }
}

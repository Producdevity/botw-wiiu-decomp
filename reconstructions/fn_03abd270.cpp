extern "C" void fn_03ac4e2c(void*, void*);
extern "C" void* data_1047eb9c;

namespace {
struct Object {
    char padding_0[0x3C];
    void *handle_3c;
    char padding_40[0x11];
    unsigned char flag_51;
};
}

extern "C" void fn_03abd270(void* self)
{
    void* handle = static_cast<Object *>(self)->handle_3c;
    if (handle != 0) {
        if (static_cast<Object *>(self)->flag_51 != 0) {
            fn_03ac4e2c(data_1047eb9c, handle);
        }
        static_cast<Object *>(self)->flag_51 = 0;
        static_cast<Object *>(self)->handle_3c = 0;
    }
}

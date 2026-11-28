struct Opaque_03bb1598;
extern "C" Opaque_03bb1598* data_1047f05c;
extern "C" signed char fn_03bb4d54(int, void*);
extern "C" void fn_03bb8fdc(void*);

namespace {
struct Manager {
    unsigned char padding_0[64];
    int handle;
};

struct Request {
    unsigned char padding_0[8];
    unsigned char payload[21];
    signed char result;
    signed char failed;
    unsigned char padding_1F[0xF8 - 0x1F];
    int handle;
};
}

extern "C" void fn_03bb905c(void* object) {
    int handle;

    if (((Request *)object)->handle == 0) {
        handle = ((Manager *)data_1047f05c)->handle;
        ((Request *)object)->handle = handle;
        if (handle == 0) {
            ((Request *)object)->failed = 1;
            return;
        }
    }
    fn_03bb8fdc(object);
    ((Request *)object)->result = fn_03bb4d54(((Request *)object)->handle, ((Request *)object)->payload);
}

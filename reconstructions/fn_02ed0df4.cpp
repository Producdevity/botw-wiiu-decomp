extern "C" unsigned char data_1021d058[];
extern "C" unsigned char data_1021d060[];
extern "C" unsigned char data_1021d06c[];
extern "C" int fn_03a2fe80(int, void*, int);

namespace {
struct Object {
    int handle;
    int value_4;
    int value_8;
    int value_c;
};
}

extern "C" void fn_02ed0df4(void* object, int handle) {
    if (handle != 0) {
        reinterpret_cast<Object *>(object)->handle = handle;
        reinterpret_cast<Object *>(object)->value_4 = fn_03a2fe80(handle, data_1021d060, 0);
        reinterpret_cast<Object *>(object)->value_8 = fn_03a2fe80(reinterpret_cast<Object *>(object)->handle, data_1021d06c, 1);
        reinterpret_cast<Object *>(object)->value_c = fn_03a2fe80(reinterpret_cast<Object *>(object)->handle, data_1021d058, 1);
    }
}

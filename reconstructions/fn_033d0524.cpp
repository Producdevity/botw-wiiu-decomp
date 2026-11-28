extern "C" void* data_1046f37c;
extern "C" void fn_033ee768(int, int, int);
extern "C" void fn_039e483c(int, int);
extern "C" void fn_039e4b60(int, int, int);

namespace {
struct Object {
    char padding_0[0x20];
    int handle;
    char padding_24[0x10];
    unsigned char state;
};
}

extern "C" void fn_033d0524(void* object, int state) {
    if (state != reinterpret_cast<Object *>(object)->state) {
        reinterpret_cast<Object *>(object)->state = state;
        fn_039e4b60(reinterpret_cast<Object *>(object)->handle, 0, -1);
        fn_039e483c(reinterpret_cast<Object *>(object)->handle, 2);
        fn_033ee768(reinterpret_cast<int>(data_1046f37c), reinterpret_cast<Object *>(object)->handle, reinterpret_cast<Object *>(object)->state ^ 1);
    }
}

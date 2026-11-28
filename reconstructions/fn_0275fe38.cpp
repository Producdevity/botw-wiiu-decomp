extern "C" void fn_0275f9c8(void* object);
extern "C" void fn_0327ac28(void* object);
extern "C" void fn_0327b808(void* object, void* other);

namespace {
struct Object {
    char padding_0[0xA8];
    unsigned char flag;
};
}

extern "C" void fn_0275fe38(void* object, void* other) {
    fn_0275f9c8(object);
    if (((Object *) object)->flag != 0) {
        fn_0327ac28(object);
        ((Object *) object)->flag = 0;
        return;
    }
    fn_0327b808(object, other);
}

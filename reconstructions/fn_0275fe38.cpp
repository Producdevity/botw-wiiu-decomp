extern "C" void fn_0275f9c8(void* object);
extern "C" void fn_0327ac28(void* object);
extern "C" void fn_0327b808(void* object, void* other);

extern "C" void fn_0275fe38(void* object, void* other) {
    fn_0275f9c8(object);
    if (*((unsigned char*)object + 0xA8) != 0) {
        fn_0327ac28(object);
        *((unsigned char*)object + 0xA8) = 0;
        return;
    }
    fn_0327b808(object, other);
}

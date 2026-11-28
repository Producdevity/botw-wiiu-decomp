namespace {
struct Object {
    char padding_0[16];
    int value_10;
};
}

extern "C" void fn_02e1aa0c(int, int);
extern "C" void fn_03075f34();
extern "C" int fn_03075f54();
extern "C" void fn_03075f7c();

extern "C" void fn_02311a40(void* object) {
    fn_02e1aa0c(0, 0);
    if (fn_03075f54() != 0) {
        fn_03075f7c();
        return;
    }
    ((Object *) object)->value_10 = 0;
    fn_03075f34();
}

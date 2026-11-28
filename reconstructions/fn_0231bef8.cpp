namespace {
struct Object {
    char padding_0[16];
    int value_10;
};
}

extern "C" void fn_02e1aa0c(int, int);
extern "C" void fn_03075c08();
extern "C" void fn_03075d8c();
extern "C" int fn_03075dd8();

extern "C" void fn_0231bef8(void* object) {
    fn_02e1aa0c(0, 0);
    if (fn_03075dd8() == 0) {
        ((Object *) object)->value_10 = 0;
        fn_03075d8c();
        return;
    }
    fn_03075c08();
}

namespace {
struct Vtable {
    char padding_0[0x1C];
    void (*method_1c)(void *);
};

struct Object {
    char padding_0[0x44];
    int value_44;
    Vtable *vtable_48;
};
}

extern "C" void fn_037946f0(void* object, int value, int a, int b, int c, float scale);
extern "C" float data_10086b50;
extern "C" void fn_0232fea4(void* object) {
    ((Object *)object)->vtable_48->method_1c(&((Object *)object)->value_44);
    fn_037946f0(object, ((Object *)object)->value_44, 1, 0, 0, data_10086b50);
}

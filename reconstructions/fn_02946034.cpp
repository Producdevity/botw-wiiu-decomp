namespace {
struct Object {
    char padding_0[0xF4];
    void* child;
    char padding_f8[0x238];
    void* component;
};
}

extern "C" void fn_02945e7c(void*);
extern "C" void fn_02945fe8(void**);
extern "C" void fn_02c1a5fc(void*);
extern "C" void fn_0339a080(void*);
extern "C" void fn_03485f68(void*);
extern "C" void fn_03796ed8(void*);
extern "C" void fn_0383eb7c(void*, int);
extern "C" void fn_03985a50(void*, int, void*);

extern "C" void fn_02946034(void** object) {
    fn_02945e7c(object);
    fn_0383eb7c(*object, 2);
    fn_02945fe8(object);
    fn_03796ed8(*object);
    fn_03985a50(((Object*)*object)->component, 0, 0);
    void* child = ((Object*)*object)->child;
    if (child != 0) {
        fn_03485f68(((Object*)*object)->child);
    }
    fn_02c1a5fc(*object);
    fn_0339a080(*object);
}

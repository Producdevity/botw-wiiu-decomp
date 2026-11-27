namespace {
struct Object {
    char padding_0[0xF4];
    void* field_F4;
    char padding_f8[0x238];
    void* field_330;
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

extern "C" void fn_02946034(void** arg0) {
    fn_02945e7c(arg0);
    fn_0383eb7c(*arg0, 2);
    fn_02945fe8(arg0);
    fn_03796ed8(*arg0);
    fn_03985a50(((Object*)*arg0)->field_330, 0, 0);
    void* field = ((Object*)*arg0)->field_F4;
    if (field != 0) {
        fn_03485f68(((Object*)*arg0)->field_F4);
    }
    fn_02c1a5fc(*arg0);
    fn_0339a080(*arg0);
}

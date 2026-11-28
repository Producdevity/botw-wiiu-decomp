namespace {
struct Context {
    char padding_0[0x394];
    void* field_394;
};

struct Object {
    char padding_0[4];
    Context* context;
    char sub[0xEC];
    int first;
    int second;
};
}

extern "C" void fn_032e0620(void*);
extern "C" void fn_032f9348(void*, void*);

extern "C" int fn_032e07b8(void* self, void* context) {
    Object* object = (Object*)self;
    object->context = (Context*)context;
    fn_032f9348(object->sub, object->context->field_394);
    object->second = 0;
    object->first = 0;
    fn_032e0620(self);
    return 1;
}

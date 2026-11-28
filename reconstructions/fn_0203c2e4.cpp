extern "C" void fn_03464c54(void* resource);
extern "C" void fn_03463194(void* resource);

namespace {
struct Object {
    unsigned char padding_0[0x30];
    void* first;
    void* second;
};
}

extern "C" void fn_0203c2e4(void* self) {
    Object* object = (Object*)self;
    if (object->first != 0) {
        fn_03464c54(object->first);
        object->first = 0;
    }
    if (object->second != 0) {
        fn_03463194(object->second);
        object->second = 0;
    }
}

namespace {
struct Object {
    const void *vtable;
    int first;
    int second;
    int third;
};
}

extern "C" unsigned char data_1027a8b8[];
extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_030b8f84(void* arg0, int first, int second) {
    Object *object = (Object *)arg0;
    if (object != 0 || (object = (Object *)fn_0308e578(0x10U)) != 0) {
        object->first = first;
        object->second = second;
        object->vtable = data_1027a8b8;
        object->third = 0;
    }
}

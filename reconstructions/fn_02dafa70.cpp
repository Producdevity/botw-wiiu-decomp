extern "C" void* fn_0308e578(unsigned);
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];

namespace {
struct Object {
    unsigned char* table;
    unsigned char* data;
};
}

extern "C" void fn_02dafa70(void* storage) {
    Object* object = (Object*)storage;

    if (object != 0 || (object = (Object*)fn_0308e578(8U), object != 0)) {
        object->data = (unsigned char*)&data_10263910;
        object->table = (unsigned char*)data_10263a00;
    }
}

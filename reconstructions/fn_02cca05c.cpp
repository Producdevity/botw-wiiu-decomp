extern "C" int fn_02d94010(void*);
extern "C" void fn_02ebccb8(void*);
extern "C" void* data_10469978;

namespace {
struct Vtable {
    char padding_0[0x724];
    void (*handler)(void*, int);
};

struct Object {
    char padding_0[0xE8];
    Vtable* vtable;
    char padding_ec[0x815];
    unsigned char flag;
};
}

extern "C" void fn_02cca05c(void** self)
{
    Object* object = static_cast<Object*>(*self);
    if (object->flag != 0) {
        if (fn_02d94010(object) != 0) {
            if (data_10469978 != 0) {
                fn_02ebccb8(data_10469978);
            }
        } else {
            object = static_cast<Object*>(*self);
            object->vtable->handler(object, 0);
        }
    }
}

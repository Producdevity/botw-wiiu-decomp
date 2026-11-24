extern "C" int fn_03798e3c(void*);
extern "C" void fn_03798f68(void* context);
extern "C" void fn_03798fa4(void* context);

struct Opaque_fn_03798fb0 {
    unsigned char padding_0[248];
    unsigned int field_f8;
};

extern "C" void fn_03798fb0(Opaque_fn_03798fb0* object, unsigned int value) {
    unsigned int id = value;
    if (id) {
        if (id == fn_03798e3c(object)) {
            fn_03798f68(object);
        }
        if (id == object->field_f8) {
            fn_03798fa4(object);
        }
    }
}

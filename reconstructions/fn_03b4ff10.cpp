extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03a74684(void*);
extern "C" long long fn_0434c458();
extern "C" unsigned char data_103a4d40[];

struct Opaque_fn_03b4ff10 {
    unsigned char base_0[28];
    const void* vtable;
    unsigned int field_20;
    unsigned int field_24;
    long long first_time;
    long long second_time;
    bool flag;
};

extern "C" Opaque_fn_03b4ff10* fn_03b4ff10(Opaque_fn_03b4ff10* object) {
    if (!object) {
        object = (Opaque_fn_03b4ff10*)fn_0308e578(64);
        if (!object)
            return object;
    }
    fn_03a74684(object);
    object->vtable = data_103a4d40;
    object->field_20 = 0;
    object->field_24 = 0;
    object->first_time = fn_0434c458();
    object->second_time = fn_0434c458();
    object->flag = false;
    return object;
}

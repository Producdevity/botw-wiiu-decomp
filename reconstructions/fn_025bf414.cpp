extern "C" int fn_0378db34(void*);
extern "C" int fn_02b68d54(void*, void*, float);

struct Opaque_fn_025bf414 {
    void* owner;
    unsigned char padding_4[60];
    float* value;
};

extern "C" int fn_025bf414(void* context, void* key) {
    int result = 0;
    Opaque_fn_025bf414* object = (Opaque_fn_025bf414*)context;
    if (fn_0378db34(key)) {
        result = fn_02b68d54(object->owner, key, *object->value);
    }
    return result;
}

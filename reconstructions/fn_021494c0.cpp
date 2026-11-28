extern "C" int fn_02ea235c(void*, void*);
extern "C" void fn_032043b4(void*, void*, void*);

extern "C" void *data_104698f8;
extern "C" void *data_1046d5b0;

namespace {
struct Object {
    char padding_0[0x10];
    void **key;
    char payload[1];
};
}

extern "C" int fn_021494c0(void *object) {
    Object *self = (Object *) object;
    fn_032043b4(data_1046d5b0, (void *)(fn_02ea235c(data_104698f8, *self->key) + 0x18), self->payload);
    return 1;
}

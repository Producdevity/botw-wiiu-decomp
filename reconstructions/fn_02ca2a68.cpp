struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

namespace {
struct Object {
    InferredObject* target;
    char padding_4[0x50];
    unsigned char flag;
};
}

extern "C" unsigned char fn_02ca2a68(void* object) {
    Object* self = (Object*)object;
    int result = 1;

    if (fn_02d82148(self->target) == 0 && self->flag == 0) {
        result = 0;
    }
    return result;
}

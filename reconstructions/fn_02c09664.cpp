extern "C" float fn_02c0f358(void*);

namespace {
struct Object {
    char padding_0[0x550];
    char source[0x34];
    float value_584;
    char padding_588[0x34];
    float value_5bc;
    char padding_5c0[0x34];
    float value_5f4;
    char padding_5f8[0x34];
    float value_62c;
    char padding_630[0x34];
    float value_664;
    char padding_668[0x34];
    float value_69c;
};
}

extern "C" void fn_02c09664(void* object) {
    Object* self = (Object*)object;
    float value;

    value = fn_02c0f358(self->source);
    self->value_69c = value;
    self->value_664 = value;
    self->value_62c = value;
    self->value_5f4 = value;
    self->value_5bc = value;
    self->value_584 = value;
}

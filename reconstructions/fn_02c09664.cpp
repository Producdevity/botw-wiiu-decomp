typedef float f32;

extern "C" float fn_02c0f358(void*);

namespace {
struct Object {
    char padding_0[0x550];
    char source[0x34];
    f32 value_584;
    char padding_588[0x34];
    f32 value_5bc;
    char padding_5c0[0x34];
    f32 value_5f4;
    char padding_5f8[0x34];
    f32 value_62c;
    char padding_630[0x34];
    f32 value_664;
    char padding_668[0x34];
    f32 value_69c;
};
}

extern "C" void fn_02c09664(void *arg0) {
    Object *object = (Object *)arg0;
    f32 value;

    value = fn_02c0f358(object->source);
    object->value_69c = value;
    object->value_664 = value;
    object->value_62c = value;
    object->value_5f4 = value;
    object->value_5bc = value;
    object->value_584 = value;
}

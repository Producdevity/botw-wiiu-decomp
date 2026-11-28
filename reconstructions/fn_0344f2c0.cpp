extern "C" const float data_102c7dac;
extern "C" void fn_03451650(int);

namespace {
struct Object {
    char padding_0[28];
    int value_1c;
    char padding_20[196];
    unsigned short flags;
};

struct Vector {
    float x;
    float y;
    float z;
};
}

extern "C" void fn_0344f2c0(void* object, void* vector) {
    fn_03451650(((Object *) object)->value_1c);
    if (((Vector *) vector)->x != data_102c7dac || ((Vector *) vector)->y != data_102c7dac || ((Vector *) vector)->z != data_102c7dac) {
        ((Object *) object)->flags |= 32;
    }
}

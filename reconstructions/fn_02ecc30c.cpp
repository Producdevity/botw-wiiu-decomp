extern "C" float data_1021c894;
extern "C" char* data_10463798;
extern "C" unsigned char fn_02a2c0d4(void* p);
extern "C" float fn_02a2c410(void* p);

namespace {
struct Object {
    char padding_0[0xC0];
    float value_c0;
};
}

extern "C" void fn_02ecc30c(void* object) {
    if (fn_02a2c0d4(data_10463798) != 0) {
        ((Object *) object)->value_c0 = -fn_02a2c410(data_10463798);
        return;
    }
    ((Object *) object)->value_c0 = data_1021c894;
}

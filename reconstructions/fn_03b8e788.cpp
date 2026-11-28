extern "C" void fn_03ba9c84(void*, float, float);

extern "C" float data_103c5c40;
extern "C" float data_103c5d50;

namespace {
struct Object {
    char padding_0[0x14];
    int state;
    char padding_18[0x34 - 0x18];
    char vector[1];
};
}

extern "C" void fn_03b8e788(void *object) {
    fn_03ba9c84(((Object *) object)->vector, data_103c5d50, data_103c5c40);
    ((Object *) object)->state = 5;
}

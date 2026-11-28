extern "C" void fn_02a19850(void* manager, void* entry, void* extra);
extern "C" void* data_10463748;

namespace {
struct Manager {
    char padding_0[0xA70];
    float value;
};
struct Object {
    void *entry;
    char padding_4[0x24];
    float *output;
};
}

extern "C" void fn_02561d60(void* object) {
    void* manager = data_10463748;
    if (manager != 0) {
        void* entry = ((Object *) object)->entry;
        if (entry != 0) {
            fn_02a19850(manager, entry, 0);
            *((Object *) object)->output = ((Manager *) manager)->value;
        }
    }
}

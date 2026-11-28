extern "C" int fn_02a279dc(void* manager, void* owner);
extern "C" int fn_02a27ac4(void* manager, void* owner);
extern "C" void* data_1046378c;

namespace {
struct Object {
    void *owner;
    char padding_4[0x318 - 4];
    unsigned char flag;
};
}

extern "C" void fn_02982d80(void* object) {
    if (((Object *) object)->flag != 0) {
        void* manager = (char*)data_1046378c + 0x5C0;
        if (manager != 0 && fn_02a27ac4(manager, ((Object *) object)->owner) != 0) {
            fn_02a279dc(manager, ((Object *) object)->owner);
        }
    }
}

extern "C" unsigned char data_10118d94[];
extern "C" int fn_0339a0d0(void *);
extern "C" void fn_0383e968(void *, int, int, int);

namespace {
struct Object {
    void *owner;
    char padding_4[0x1C];
    unsigned char registered;
    char padding_21[3];
    int value_24;
};
}

extern "C" void fn_026effd0(void* object) {
    if (fn_0339a0d0(reinterpret_cast<Object *>(object)->owner) != 0) {
        if (reinterpret_cast<Object *>(object)->registered == 0) {
            fn_0383e968(reinterpret_cast<Object *>(object)->owner, reinterpret_cast<int>(data_10118d94), 2, reinterpret_cast<int>(&reinterpret_cast<Object *>(object)->value_24));
            reinterpret_cast<Object *>(object)->registered = 1;
        }
    } else {
        reinterpret_cast<Object *>(object)->registered = 0;
    }
}

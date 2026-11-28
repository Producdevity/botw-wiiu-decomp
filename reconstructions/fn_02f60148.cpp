extern "C" int fn_02ea9940(int, int);
extern "C" void fn_02f22fec(void*, int);
extern "C" void * data_104698f8;

namespace {
struct Object {
    char padding_0[0x21A8];
    void *child;
};
}

extern "C" void fn_02f60148(void *object) {
    Object *self = reinterpret_cast<Object *>(object);
    if (self->child != 0) {
        if (fn_02ea9940(reinterpret_cast<int>(data_104698f8), 0) != 0) {
            fn_02f22fec(self->child, 0);
            return;
        }
        if (fn_02ea9940(reinterpret_cast<int>(data_104698f8), 1) != 0) {
            fn_02f22fec(self->child, 1);
        }
    }
}

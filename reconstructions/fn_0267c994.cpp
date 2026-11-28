extern "C" int fn_02681a9c(void* object);
extern "C" int fn_0269d440(void* owner);

namespace {
struct Object {
    void *owner;
    char padding_4[0x110];
    unsigned char flag;
};
}

extern "C" int fn_0267c994(void* object) {
    if (fn_0269d440(((Object *) object)->owner) == 0) {
        return 0;
    }
    int result = 1;
    if (((Object *) object)->flag == 0) {
        result = fn_02681a9c(object);
    }
    return result;
}

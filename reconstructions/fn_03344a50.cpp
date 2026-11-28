extern "C" int fn_03344560(void*, int);
extern "C" int fn_033445d8(void*, int);

namespace {
struct Object {
    char padding_0[0x184];
    unsigned char flag;
};
}

extern "C" void fn_03344a50(void* object, int value) {
    if (((Object *) object)->flag != 0 && fn_03344560(object, value) == 0) {
        ((Object *) object)->flag = 0;
        return;
    }
    if (fn_033445d8(object, value) != 0) {
        ((Object *) object)->flag = 1;
    }
}

extern "C" float data_1014c818;
extern "C" int fn_0287db9c(void*);
extern "C" int fn_0287de0c(void*);

namespace {
struct Object {
    char padding_0[0x34];
    float value;
};
}

extern "C" int fn_0287deb8(void* object) {
    if (!(((Object *) object)->value > data_1014c818) && fn_0287db9c(object) == 0) {
        return fn_0287de0c(object);
    }
    return 0;
}

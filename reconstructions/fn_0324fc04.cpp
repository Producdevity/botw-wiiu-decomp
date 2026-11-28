extern "C" void *data_1046d5b0;
extern "C" void fn_0322b540(int, int, int, int, int);
extern "C" void fn_0324faf0(void*);

namespace {
struct Object {
    char padding_0[28];
    int busy;
};

struct Manager {
    char padding_0[1828];
    int value_724;
    int value_728;
};
}

extern "C" int fn_0324fc04(void* object) {
    if (((Object *) object)->busy != 0) {
        return 0;
    }
    if (data_1046d5b0 != 0) {
        fn_0322b540(((Manager *) data_1046d5b0)->value_724, ((Manager *) data_1046d5b0)->value_728, 1, 0, 0);
    }
    fn_0324faf0(object);
    return 1;
}

extern "C" void *data_1047be88;
extern "C" int fn_0366b708(int);

namespace {
struct Slot {
    char padding_0[12];
    int id;
};

struct Manager {
    char padding_0[1116];
    unsigned int count;
    char padding_460[4];
    Slot *slots;
};
}

extern "C" int fn_027dedb8() {
    Manager *manager = (Manager *)data_1047be88;
    int id;

    if (manager != 0) {
        id = 0;
        if (manager->count > 3U) {
            id = manager->slots->id;
        }
        if (fn_0366b708(id) != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}

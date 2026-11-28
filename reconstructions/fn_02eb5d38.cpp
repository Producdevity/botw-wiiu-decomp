extern "C" void fn_02eb5bbc(void*, int, void*);
extern "C" void fn_030bb668(void* state);
extern "C" void fn_030bb69c(void* state);

namespace {
struct ActiveEntry {
    char padding_0[8];
    int state;
};
struct Manager {
    char padding_0[16];
    char lock[60];
    char padding_4C[0x37E98 - 0x4C];
    ActiveEntry* active;
};
}

extern "C" void fn_02eb5d38(void* object) {
    Manager* manager = (Manager*)object;
    ActiveEntry* active;
    void* lock;

    active = manager->active;
    if ((active != 0) && ((int) active->state < 7)) {
        lock = manager->lock;
        fn_030bb668(lock);
        fn_02eb5bbc(manager, (int)manager->active, (char*)lock + 60);
        fn_030bb69c(lock);
    }
}

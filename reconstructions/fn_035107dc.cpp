extern "C" void fn_03548860(void* object);

namespace {

struct Object {
    char pad[12];
    char base[300];
    int state;
    short count;
};

}

extern "C" void fn_035107dc(Object* p) {
    fn_03548860(p->base);
    if (p->state == 2) {
        p->count = 0;
        p->state = 0;
    }
}

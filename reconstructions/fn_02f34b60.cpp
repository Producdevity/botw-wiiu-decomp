extern "C" void fn_03c07ad8(void* object, int flag);
extern "C" void fn_03a646ac(void* object);

namespace {

struct Object {
    char pad[200];
    void* member;
};

}

extern "C" void fn_02f34b60(Object* p) {
    if (p->member) {
        fn_03c07ad8(p->member, 1);
        fn_03a646ac(p->member);
        p->member = 0;
    }
}

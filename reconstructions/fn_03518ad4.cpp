extern "C" unsigned fn_03519520();
extern "C" unsigned fn_03519544();
extern "C" int fn_0353ab54(int, void*);
extern "C" void fn_035480d8(int, void*);

namespace {
struct Owner {
    char padding_0[176];
    char key[44];
    int handle;
};
}

extern "C" void fn_03518ad4(void* object) {
    int first;
    int second;

    first = fn_03519520();
    second = fn_03519544();
    if ((first != 0) && (second != 0)) {
        ((Owner*)object)->handle = fn_0353ab54(first, ((Owner*)object)->key);
        fn_035480d8(second, object);
    }
}

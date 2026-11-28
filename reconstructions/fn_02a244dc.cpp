extern "C" void fn_02a240a0(void*);
extern "C" int fn_030dff10(void*, void*);
extern "C" int fn_030e005c(void*, void*);
struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor*);
extern "C" void fn_03626870(void*, void*, void*, void*, int);

namespace {
struct Owner {
    char padding_0[0x58];
    char sender[0x94];
    char key[1];
};
}

extern "C" void fn_02a244dc(void* object, struct ProcAccessor* accessor) {
    int message;
    if (fn_030dff10(accessor, ((Owner*)object)->key) == 0) {
        fn_02a240a0(object);
        if (fn_030e005c(accessor, ((Owner*)object)->key) != 0) {
            message = 0x080000B6;
            fn_03626870(((Owner*)object)->sender, fn_030e0414(accessor), &message, 0, 1);
        }
    }
}

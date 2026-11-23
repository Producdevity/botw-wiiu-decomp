extern "C" void* fn_0308e5a0(unsigned, void *, int);
struct ByamlHeader;
struct ByamlView;
extern "C" void* fn_0396bdd8(void*, const void*);

extern "C" void fn_035d5e24(void *arg0, struct ByamlHeader *arg1, void *arg2) {
    struct ByamlView *var_r3;

    var_r3 = (ByamlView *)(fn_0308e5a0(8U, arg2, 4));
    if (var_r3 != 0) {
        var_r3 = (ByamlView *)(fn_0396bdd8(var_r3, arg1));
    }
    (*(struct ByamlView **)((char *)(arg0) + (0x10))) = var_r3;
}

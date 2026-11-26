struct Opaque_02c11f30;
struct Opaque_fn_02c1b27c;

extern "C" bool fn_02c11f30(const Opaque_02c11f30* object);
extern "C" void* fn_02c1b18c();
extern "C" bool fn_02c1b27c(Opaque_fn_02c1b27c* object, void* key);

extern "C" int fn_02c1b6c0(void* table, void* key) {
    void* entry = fn_02c1b18c();
    if (entry == 0 || (key != 0 && fn_02c1b27c((Opaque_fn_02c1b27c*) table, entry) != 0)) {
        return 0;
    }
    return fn_02c11f30((const Opaque_02c11f30*) entry);
}

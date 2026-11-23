extern "C" void* data_1046ca84;
extern "C" void* data_1047ae64;

extern "C" bool fn_0310f1a0(void* table, unsigned* id, const void* key);
extern "C" void fn_035d5e7c(void* table, void** entry, unsigned id);
extern "C" void* fn_037b5d64(void* owner, void* entry, const void* key, void* a3, void* a4, int a5, int a6, int a7);

extern "C" void* fn_037b5e8c(void* owner, const void* key, void* a3, void* a4, int a5, int a6, int a7) {
    unsigned id;
    if (fn_0310f1a0(data_1046ca84, &id, key)) {
        void* entry;
        fn_035d5e7c(data_1047ae64, &entry, id);
        return fn_037b5d64(owner, entry, key, a3, a4, a5, a6, a7);
    }
    return 0;
}

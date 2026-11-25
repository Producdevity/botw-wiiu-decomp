typedef unsigned int u32;

extern "C" void* fn_024c4b34(void* self);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" void fn_030ea2cc(void *);

extern "C" const char data_100c80bc[];

extern "C" bool fn_024c5324(void* self, void** message) {
    void* const* vt1;
    void* const* vt2;
    u32* type = ((u32 * (*)(void**))(vt1 = *(void* const**)message)[9])(message);
    if (*type == 0x080000c8U) {
        u32* user_data = ((u32 * (*)(void**))(vt2 = *(void* const**)message)[11])(message);
        void* data_mgr = fn_024c4b34(self);
        if (user_data != 0 && data_mgr != 0) {
            switch (*user_data) {
            case 3:
                fn_037b8284(self, data_100c80bc, 0);
                break;
            case 4:
                fn_030ea2cc(self);
                break;
            }
        }
        return true;
    }
    return false;
}

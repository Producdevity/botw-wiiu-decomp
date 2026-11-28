namespace {
struct Request {
    char padding_0[4];
    void* target;
};
}

extern "C" char* fn_035194bc();
extern "C" void* fn_03513434(void*);
extern "C" void* fn_03baa330(int);
extern "C" void* fn_03bad7fc(void*, void*);
extern "C" void* fn_03513838(void*, void*);

extern "C" void fn_0354efc8(void* self, void* request) {
    void* entry = fn_03513434(fn_035194bc());
    if (entry != 0) {
        void* target = ((Request*)request)->target;
        if (target != 0) {
            void* owner = fn_03baa330((int)target);
            if (owner != 0) {
                fn_03bad7fc(owner, entry);
                fn_03513838(entry, target);
            }
        }
    }
}

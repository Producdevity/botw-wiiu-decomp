extern "C" void fn_03458474(void*);
extern "C" bool fn_03485c18(const void*);
extern "C" void fn_03485f68(void*);
extern "C" void fn_032e35d4(void* self, void* context)
{
    void* target = *(void**)((char*)self + 8);
    if (target != 0) {
        void* entry = target;
        char* object = (char*)self;
        if (*(unsigned short*)((char*)entry + 0x24) & 1) {
            fn_03458474(entry);
        }
        if (fn_03485c18(*(void**)(object + 4)) != 0) {
            void** slot = (void**)((char*)self + 4);
            fn_03485f68(*slot);
        }
    }
}

extern "C" void* fn_03ba20d8(void*, void*);
extern "C" void fn_03ba78d4(void*, int, void*, void*, void*);
extern "C" void fn_03ba310c(void** self, void* key)
{
    void* table = *(void**)(*(char**)((char*)*self + 0x18) + 0xC);
    void* entry = fn_03ba20d8(table, key);
    fn_03ba78d4(self, 2, key, *(void**)((char*)entry + 0xC), *(void**)((char*)entry + 4));
}

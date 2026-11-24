extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_0425766c(void* self, int tag, void* source)
{
    void* object = self;
    if (object != 0 || (object = fn_0308e578(0xC)) != 0) {
        *(int*)((char*)object + 0) = tag;
        *(int*)((char*)object + 4) = *(int*)((char*)source + 0);
        int* field = (int*)((char*)object + 8);
        *field = *(int*)((char*)source + 4);
    }
}

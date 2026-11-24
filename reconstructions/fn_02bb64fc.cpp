extern "C" void fn_02bb64a0(void* self, unsigned int* value, unsigned char* out);
extern "C" void fn_02bb64bc(void* self, unsigned char* state);

extern "C" void fn_02bb64fc(void* self) {
    char* base = (char*)self;
    fn_02bb64a0(self, *(unsigned int**)(base + 0x220), (unsigned char*)(base + 0x295));
    fn_02bb64a0(self, *(unsigned int**)(base + 0x224), (unsigned char*)(base + 0x296));
    fn_02bb64bc(self, (unsigned char*)(base + 0x295));
    fn_02bb64bc(self, (unsigned char*)(base + 0x296));
}

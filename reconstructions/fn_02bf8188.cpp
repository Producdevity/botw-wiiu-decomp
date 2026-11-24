struct Flags_02bf8188 {
    unsigned short unknown : 15;
    unsigned short active : 1;
};

extern "C" const float data_101bcec4;
extern "C" void fn_02bf817c(void* p);
extern "C" void* fn_02c0378c(void* holder);

extern "C" void fn_02bf8188(void* self) {
    char* object = (char*)self;
    *(int*)(object + 0x28) = 3;
    fn_02bf817c(object + 0xc0);
    *(float*)(object + 0x70) = data_101bcec4;
    char* target = (char*)fn_02c0378c(object + 0x10);
    if (target != 0) {
        ((Flags_02bf8188*)(target + 0xcac))->active = 0;
    }
}

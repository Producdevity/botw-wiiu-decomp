extern "C" const unsigned char data_10549dd0[];
extern "C" void fn_0378da14(void* handle);

struct Opaque_02b33c54_Vec3 {
    float x;
    float y;
    float z;
};

struct Opaque_02b33c54_Handles {
    unsigned char first[12];
    unsigned char second[12];

    void release() {
        fn_0378da14(second);
        fn_0378da14(first);
    }
};

struct Opaque_02b33c54 {
    unsigned char unknown_00[36];
    Opaque_02b33c54_Handles handles;
    unsigned limit;
    int count;
    Opaque_02b33c54_Vec3 position;
    bool active;
};

extern "C" void fn_02b33c54(Opaque_02b33c54* self) {
    self->limit = 0x7fffffff;
    self->count = 0;
    self->position = *(const Opaque_02b33c54_Vec3*)data_10549dd0;
    self->handles.release();
    self->active = false;
}

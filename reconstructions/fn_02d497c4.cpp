struct ResourceHolder {
    char pad0[0x30];
    void* resource;
};

extern "C" void* data_1047c244;

extern "C" void fn_0378f2d4(void* manager, void* resource, int flags);

extern "C" void* fn_02d497c4(ResourceHolder* holder) {
    void* resource = holder->resource;
    if (resource != 0) {
        fn_0378f2d4(data_1047c244, resource, 0);
        return holder->resource;
    }
    return 0;
}

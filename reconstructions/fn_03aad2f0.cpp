namespace {
struct Object {
    char padding_0[0xA58];
    char member_a58[0x1C];
    char member_a74[1];
};
}

extern "C" void fn_03a4d9d8(void*);
extern "C" int fn_03aad2b0(void*);

extern "C" void fn_03aad2f0(void *object) {
    if (fn_03aad2b0(object) != 0) {
        fn_03a4d9d8(((Object *)object)->member_a74);
        fn_03a4d9d8(((Object *)object)->member_a58);
    }
}

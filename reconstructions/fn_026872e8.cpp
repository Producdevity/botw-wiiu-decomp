extern "C" int fn_02686f94(void* object);
extern "C" void fn_0268722c(void* object);
extern "C" void fn_02683048(void* object, void* other);

extern "C" void fn_026872e8(void* object, void* other) {
    if (fn_02686f94(object) != 0) {
        fn_0268722c(object);
        return;
    }
    fn_02683048(object, other);
}

extern "C" int fn_024e88a4(void* object);
extern "C" void fn_024e894c(void* object);
extern "C" void fn_025d9580(void* object, void* other);

extern "C" void fn_024e89fc(void* object, void* other) {
    if (fn_024e88a4(object) != 0) {
        fn_024e894c(object);
        return;
    }
    fn_025d9580(object, other);
}

struct Prefix_032da688 { unsigned char bytes[40]; };
struct Range_032da688 { int first; int second; int begin; int end; };
struct Opaque_032da688 : Prefix_032da688, Range_032da688 { unsigned char unknown_38[4]; };
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_032da688(Opaque_032da688* object, unsigned flags) {
    if (object) {
        fn_0378da14(reinterpret_cast<unsigned char*>(object) + 56);
        Range_032da688& range = *object;
        if (&range) {
            object->first = -1;
            object->second = -1;
            object->begin = 0;
            object->end = 0;
        }
        fn_037b7d90(object, 0);
        if (flags & 1) fn_0308e6d0(object);
    }
}

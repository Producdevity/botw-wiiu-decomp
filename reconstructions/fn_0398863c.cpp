struct Source;

struct Binding {
    unsigned int handle;
    unsigned char unknown_04[4];
    Source* source;
};

extern "C" void fn_03988318(void* member);
extern "C" void fn_03987e34(Source* source, Binding* binding);
extern "C" void fn_030b0cb8(unsigned int* destination, const unsigned int* source);
extern "C" void fn_0398860c(Binding* binding);

extern "C" void fn_0398863c(Binding* binding, Source* source, const unsigned int* handle) {
    if (binding->source != source) {
        fn_03988318(binding);
        fn_03987e34(source, binding);
        binding->source = source;
    }
    fn_030b0cb8(&binding->handle, handle);
    fn_0398860c(binding);
}

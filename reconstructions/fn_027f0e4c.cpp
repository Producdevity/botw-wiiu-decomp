extern "C" unsigned char data_1057f3c4[];
namespace { struct ContextView { unsigned char prefix[108]; void* field0; }; }
extern "C" void* fn_027f0e4c(void* context) {
    void* member = static_cast<ContextView*>(context)->field0;
    if (member != 0) {
        unsigned char* selected = static_cast<unsigned char*>(member);
        selected += 2116;
        return selected;
    }
    return data_1057f3c4;
}

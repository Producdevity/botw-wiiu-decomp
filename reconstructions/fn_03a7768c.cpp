extern "C" char* fn_033ea150(void*);
extern "C" void fn_04347c78(void*, void*, void*);

namespace {
struct Block {
    int words[29];
};
}

extern "C" void fn_03a7768c(char* self) {
    char* source = fn_033ea150(self);
    *(Block*)(self + 0xBC) = *(Block*)(source + 0x18);
    *(int*)(self + 0xD8) = 4;
    fn_04347c78(self + 0xBC, self + 0xA8, self + 0xAC);
}

extern "C" void fn_02bb64a0(void* self, unsigned int* value, unsigned char* out);
extern "C" void fn_02bb64bc(void* self, unsigned char* state);

namespace {
struct Holder {
    char padding_0[0x220];
    unsigned int* first;
    unsigned int* second;
    char padding_228[0x6D];
    unsigned char first_state;
    unsigned char second_state;
};
}

extern "C" void fn_02bb64fc(void* self) {
    Holder* holder = static_cast<Holder*>(self);
    fn_02bb64a0(self, holder->first, &holder->first_state);
    fn_02bb64a0(self, holder->second, &holder->second_state);
    fn_02bb64bc(self, &holder->first_state);
    fn_02bb64bc(self, &holder->second_state);
}

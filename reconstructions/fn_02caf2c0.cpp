extern "C" void fn_02d52714(void*, int, int, void*, void*, void*);
extern "C" bool fn_0378da88(void*);
extern "C" const unsigned char data_10549dd0[];

namespace {
struct Owner {
    unsigned char padding_0[0xA5C];
    unsigned char state[1];
};

struct Request {
    Owner* owner;
    unsigned char padding_4[0x35];
    unsigned char slot;
};
}

extern "C" void fn_02caf2c0(void* object) {
    Request* request = (Request*)object;
    if (fn_0378da88(request->owner->state) != 0) {
        Owner* owner = request->owner;
        fn_02d52714(owner, request->slot, 1, (void*)data_10549dd0, owner->state, (void*)data_10549dd0);
    }
}

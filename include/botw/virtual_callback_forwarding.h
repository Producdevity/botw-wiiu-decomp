#ifndef BOTW_VIRTUAL_CALLBACK_FORWARDING_H
#define BOTW_VIRTUAL_CALLBACK_FORWARDING_H

namespace virtual_callback_forwarding {
typedef bool (*DispatchMethod)(void*, void*, bool);

struct CallbackTable {
    unsigned char prefix[108];
    DispatchMethod dispatch;
};

struct Receiver {
    unsigned char storage[12];
    const CallbackTable* table;
};
}

#endif
